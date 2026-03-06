#!/usr/bin/env bash
#
# install-nvim-iop.sh — Set up tree-sitter-iop syntax highlighting for Neovim
#
# Assumes the Intersec dotfiles layout:
#   - ~/.config/nvim/init.vim sources ~/.vimrc which sources dotfiles/vimrc
#   - nvim-treesitter is installed (via vim-plug or similar)
#   - _filetype.vim maps *.iop → d (which we override to iop)
#
# Usage:
#   ./install-nvim-iop.sh
#   ./install-nvim-iop.sh --uninstall

set -euo pipefail

GREEN='\033[0;32m'
YELLOW='\033[0;33m'
RED='\033[0;31m'
BOLD='\033[1m'
RESET='\033[0m'

info()  { echo -e "${GREEN}[✓]${RESET} $*"; }
warn()  { echo -e "${YELLOW}[!]${RESET} $*"; }
error() { echo -e "${RED}[✗]${RESET} $*"; }

REPO_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
VIMRC="$HOME/.vimrc"
NVIM_AFTER="$HOME/.config/nvim/after"
FTDETECT_FILE="$NVIM_AFTER/ftdetect/iop.vim"
QUERIES_DIR="$NVIM_AFTER/queries/iop"

MARKER_BEGIN="\" ── BEGIN tree-sitter-iop ──"
MARKER_END="\" ── END tree-sitter-iop ──"

# ─── Uninstall ───────────────────────────────────────────────────────

if [[ "${1:-}" == "--uninstall" ]]; then
    echo -e "${BOLD}Uninstalling tree-sitter-iop...${RESET}"

    if [[ -f "$VIMRC" ]] && grep -qF "$MARKER_BEGIN" "$VIMRC"; then
        sed -i "\|${MARKER_BEGIN}|,\|${MARKER_END}|d" "$VIMRC"
        info "Removed config block from $VIMRC"
    fi
    [[ -f "$FTDETECT_FILE" ]] && rm -f "$FTDETECT_FILE" && info "Removed $FTDETECT_FILE"
    [[ -d "$QUERIES_DIR" ]] && rm -rf "$QUERIES_DIR" && info "Removed $QUERIES_DIR"

    for p in "$HOME/.local/share/nvim/site/parser" \
             "$HOME/.local/share/nvim/plugged/nvim-treesitter/parser"; do
        [[ -f "$p/iop.so" ]] && rm -f "$p/iop.so" && info "Removed $p/iop.so"
    done

    info "Done. Restart Neovim."
    exit 0
fi

# ─── Validate ────────────────────────────────────────────────────────

for f in grammar.js src/parser.c queries/iop/highlights.scm; do
    if [[ ! -f "$REPO_DIR/$f" ]]; then
        error "Missing $REPO_DIR/$f — run 'npm install && npx tree-sitter generate' first."
        exit 1
    fi
done

[[ ! -f "$VIMRC" ]] && { error "$VIMRC not found."; exit 1; }
command -v nvim &>/dev/null || { error "nvim not found in PATH."; exit 1; }

echo -e "${BOLD}Installing tree-sitter-iop from $REPO_DIR${RESET}"
echo ""

# ─── 1. Filetype detection ──────────────────────────────────────────

mkdir -p "$(dirname "$FTDETECT_FILE")"
cat > "$FTDETECT_FILE" << 'EOF'
" Force *.iop → iop (overrides 'setf d' from _filetype.vim).
autocmd BufRead,BufNewFile *.iop setlocal filetype=iop
EOF
info "Filetype detection: $FTDETECT_FILE"

# ─── 2. Query symlinks ──────────────────────────────────────────────

mkdir -p "$QUERIES_DIR"
rm -f "$QUERIES_DIR"/*.scm
for scm in "$REPO_DIR"/queries/iop/*.scm; do
    ln -sf "$scm" "$QUERIES_DIR/$(basename "$scm")"
done
info "Query symlinks: $QUERIES_DIR/"

# ─── 3. Vimrc config block ──────────────────────────────────────────

if grep -qF "$MARKER_BEGIN" "$VIMRC" 2>/dev/null; then
    sed -i "\|${MARKER_BEGIN}|,\|${MARKER_END}|d" "$VIMRC"
fi

REPO_DIR_ESC="${REPO_DIR//\'/\\\'}"

cat >> "$VIMRC" << VIMRC_EOF

$MARKER_BEGIN
autocmd BufRead,BufNewFile *.iop setlocal filetype=iop

if has('nvim')
lua << EOF
  local parser_config = require('nvim-treesitter.parsers').get_parser_configs()
  parser_config.iop = {
    install_info = {
      url = '${REPO_DIR_ESC}',
      files = { 'src/parser.c', 'src/scanner.c' },
      generate_requires_npm = false,
      requires_generate_from_grammar = false,
    },
    filetype = 'iop',
  }

  local ok, _ = pcall(vim.treesitter.language.inspect, 'iop')
  if not ok then
    vim.api.nvim_create_autocmd('VimEnter', {
      once = true,
      callback = function()
        vim.cmd('TSInstall iop')
      end,
    })
  end
EOF
endif
$MARKER_END
VIMRC_EOF
info "Config block added to $VIMRC"

# ─── 4. Compile parser ──────────────────────────────────────────────

# Remove stale compiled parsers so TSInstallSync actually recompiles.
for p in "$HOME/.local/share/nvim/site/parser" \
         "$HOME/.local/share/nvim/plugged/nvim-treesitter/parser"; do
    [[ -f "$p/iop.so" ]] && rm -f "$p/iop.so" && info "Removed stale $p/iop.so"
done

echo ""
if timeout 60 nvim --headless \
    +"lua require('nvim-treesitter.parsers').get_parser_configs().iop = { install_info = { url = '${REPO_DIR_ESC}', files = { 'src/parser.c', 'src/scanner.c' } }, filetype = 'iop' }" \
    +"TSInstallSync! iop" \
    +qa 2>&1 | tail -3; then
    info "Parser compiled."
else
    warn "Headless compile failed — parser will be installed on first nvim launch."
fi

echo ""
echo -e "${BOLD}${GREEN}Done!${RESET} Restart Neovim and open a .iop file."
