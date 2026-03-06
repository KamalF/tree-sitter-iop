#include "tree_sitter/parser.h"

enum TokenType {
    BLOCK_COMMENT_CONTENT,
};

void *tree_sitter_iop_external_scanner_create(void) {
    return NULL;
}

void tree_sitter_iop_external_scanner_destroy(void *payload) {
}

unsigned tree_sitter_iop_external_scanner_serialize(void *payload,
                                                    char *buffer) {
    return 0;
}

void tree_sitter_iop_external_scanner_deserialize(void *payload,
                                                   const char *buffer,
                                                   unsigned length) {
}

bool tree_sitter_iop_external_scanner_scan(void *payload, TSLexer *lexer,
                                           const bool *valid_symbols) {
    if (!valid_symbols[BLOCK_COMMENT_CONTENT]) {
        return false;
    }

    bool has_content = false;

    while (!lexer->eof(lexer)) {
        if (lexer->lookahead == '*') {
            // Mark end before consuming '*' so we don't swallow the close.
            lexer->mark_end(lexer);
            lexer->advance(lexer, false);

            if (lexer->lookahead == '/') {
                // Found end-of-comment. Return what we have so far.
                lexer->result_symbol = BLOCK_COMMENT_CONTENT;
                return has_content;
            }

            // '*' not followed by '/' -- part of the content.
            has_content = true;
        } else if (lexer->lookahead == '\\') {
            /* Stop before '\' so the grammar-level doc_ref rule can try. */
            lexer->mark_end(lexer);
            lexer->result_symbol = BLOCK_COMMENT_CONTENT;
            return has_content;
        } else {
            has_content = true;
            lexer->advance(lexer, false);
        }
    }

    lexer->mark_end(lexer);
    lexer->result_symbol = BLOCK_COMMENT_CONTENT;
    return has_content;
}
