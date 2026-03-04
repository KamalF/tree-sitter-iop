#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 322
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 140
#define ALIAS_COUNT 0
#define TOKEN_COUNT 79
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_package = 1,
  anon_sym_SEMI = 2,
  anon_sym_typedef = 3,
  anon_sym_import = 4,
  sym_path = 5,
  anon_sym_module = 6,
  anon_sym_COLON = 7,
  anon_sym_COMMA = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  anon_sym_enum = 11,
  anon_sym_EQ = 12,
  anon_sym_interface = 13,
  anon_sym_in = 14,
  anon_sym_null = 15,
  anon_sym_void = 16,
  anon_sym_out = 17,
  anon_sym_throw = 18,
  anon_sym_LPAREN = 19,
  anon_sym_RPAREN = 20,
  anon_sym_class = 21,
  anon_sym_abstract = 22,
  anon_sym_local = 23,
  anon_sym_union = 24,
  anon_sym_struct = 25,
  anon_sym_static = 26,
  anon_sym_int = 27,
  anon_sym_string = 28,
  anon_sym_uint = 29,
  anon_sym_long = 30,
  anon_sym_ulong = 31,
  anon_sym_byte = 32,
  anon_sym_ubyte = 33,
  anon_sym_short = 34,
  anon_sym_ushort = 35,
  anon_sym_bool = 36,
  anon_sym_double = 37,
  anon_sym_bytes = 38,
  anon_sym_xml = 39,
  anon_sym_QMARK = 40,
  anon_sym_AMP = 41,
  anon_sym_LBRACK_RBRACK = 42,
  anon_sym_DQUOTE = 43,
  sym_string_content = 44,
  anon_sym_c = 45,
  aux_sym_number_token1 = 46,
  aux_sym_number_token2 = 47,
  aux_sym_number_token3 = 48,
  anon_sym_LT_LT = 49,
  anon_sym_GT_GT = 50,
  anon_sym_STAR_STAR = 51,
  anon_sym_STAR = 52,
  anon_sym_PLUS = 53,
  anon_sym_DASH = 54,
  anon_sym_SLASH = 55,
  anon_sym_PIPE = 56,
  anon_sym_TILDE = 57,
  anon_sym_true = 58,
  anon_sym_false = 59,
  sym_tag_number = 60,
  sym_identifier = 61,
  anon_sym_snmpObj = 62,
  anon_sym_snmpTbl = 63,
  anon_sym_snmpIface = 64,
  anon_sym_AT = 65,
  sym_attribute_content = 66,
  anon_sym_SLASH_SLASH = 67,
  aux_sym_comment_token1 = 68,
  aux_sym_comment_token2 = 69,
  aux_sym_comment_token3 = 70,
  aux_sym_comment_token4 = 71,
  anon_sym_SLASH_STAR = 72,
  aux_sym_comment_token5 = 73,
  aux_sym_comment_token6 = 74,
  aux_sym_comment_token7 = 75,
  aux_sym_comment_token8 = 76,
  anon_sym_STAR_SLASH = 77,
  sym_doc_ref = 78,
  sym_source_file = 79,
  sym_package_definition = 80,
  sym_typedef_definition = 81,
  sym_import_definition = 82,
  sym_module_definition = 83,
  sym_module_inheritance = 84,
  sym_module_block = 85,
  sym_module_field = 86,
  sym_enum_definition = 87,
  sym_enum_block = 88,
  sym_enum_field = 89,
  sym_default_value = 90,
  sym_interface_definition = 91,
  sym_rpc_block = 92,
  sym_rpc = 93,
  sym_rpc_in = 94,
  sym_rpc_out = 95,
  sym_rpc_throw = 96,
  sym_argument_list = 97,
  sym_class_definition = 98,
  sym_class_modifier = 99,
  sym_class_inheritance = 100,
  sym_data_structure_definition = 101,
  sym_data_structure_type = 102,
  sym_data_structure_block = 103,
  sym_field = 104,
  sym_field_qualifier = 105,
  sym_variable = 106,
  sym_type = 107,
  sym_type_specifier = 108,
  sym_value = 109,
  sym_parenthesized_expression = 110,
  sym_string = 111,
  sym_char_literal = 112,
  sym_number = 113,
  sym_operator = 114,
  sym_constant = 115,
  sym_tag = 116,
  sym_snmp_object_definition = 117,
  sym_snmp_table_definition = 118,
  sym_snmp_interface_definition = 119,
  sym_snmp_rpc_block = 120,
  sym_snmp_rpc = 121,
  sym_snmp_rpc_in = 122,
  sym_attribute = 123,
  sym_attribute_argument_list = 124,
  sym_comment = 125,
  aux_sym_source_file_repeat1 = 126,
  aux_sym_typedef_definition_repeat1 = 127,
  aux_sym_module_inheritance_repeat1 = 128,
  aux_sym_module_block_repeat1 = 129,
  aux_sym_enum_block_repeat1 = 130,
  aux_sym_rpc_block_repeat1 = 131,
  aux_sym_argument_list_repeat1 = 132,
  aux_sym_class_definition_repeat1 = 133,
  aux_sym_class_definition_repeat2 = 134,
  aux_sym_data_structure_block_repeat1 = 135,
  aux_sym_value_repeat1 = 136,
  aux_sym_snmp_rpc_block_repeat1 = 137,
  aux_sym_comment_repeat1 = 138,
  aux_sym_comment_repeat2 = 139,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_package] = "package",
  [anon_sym_SEMI] = ";",
  [anon_sym_typedef] = "typedef",
  [anon_sym_import] = "import",
  [sym_path] = "path",
  [anon_sym_module] = "module",
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_enum] = "enum",
  [anon_sym_EQ] = "=",
  [anon_sym_interface] = "interface",
  [anon_sym_in] = "in",
  [anon_sym_null] = "null",
  [anon_sym_void] = "void",
  [anon_sym_out] = "out",
  [anon_sym_throw] = "throw",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_class] = "class",
  [anon_sym_abstract] = "abstract",
  [anon_sym_local] = "local",
  [anon_sym_union] = "union",
  [anon_sym_struct] = "struct",
  [anon_sym_static] = "static",
  [anon_sym_int] = "int",
  [anon_sym_string] = "string",
  [anon_sym_uint] = "uint",
  [anon_sym_long] = "long",
  [anon_sym_ulong] = "ulong",
  [anon_sym_byte] = "byte",
  [anon_sym_ubyte] = "ubyte",
  [anon_sym_short] = "short",
  [anon_sym_ushort] = "ushort",
  [anon_sym_bool] = "bool",
  [anon_sym_double] = "double",
  [anon_sym_bytes] = "bytes",
  [anon_sym_xml] = "xml",
  [anon_sym_QMARK] = "\?",
  [anon_sym_AMP] = "&",
  [anon_sym_LBRACK_RBRACK] = "[]",
  [anon_sym_DQUOTE] = "\"",
  [sym_string_content] = "string_content",
  [anon_sym_c] = "c",
  [aux_sym_number_token1] = "number_token1",
  [aux_sym_number_token2] = "number_token2",
  [aux_sym_number_token3] = "number_token3",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [anon_sym_PIPE] = "|",
  [anon_sym_TILDE] = "~",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_tag_number] = "tag_number",
  [sym_identifier] = "identifier",
  [anon_sym_snmpObj] = "snmpObj",
  [anon_sym_snmpTbl] = "snmpTbl",
  [anon_sym_snmpIface] = "snmpIface",
  [anon_sym_AT] = "@",
  [sym_attribute_content] = "attribute_content",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "comment_token2",
  [aux_sym_comment_token3] = "comment_token3",
  [aux_sym_comment_token4] = "comment_token4",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_comment_token5] = "comment_token5",
  [aux_sym_comment_token6] = "comment_token6",
  [aux_sym_comment_token7] = "comment_token7",
  [aux_sym_comment_token8] = "comment_token8",
  [anon_sym_STAR_SLASH] = "*/",
  [sym_doc_ref] = "doc_ref",
  [sym_source_file] = "source_file",
  [sym_package_definition] = "package_definition",
  [sym_typedef_definition] = "typedef_definition",
  [sym_import_definition] = "import_definition",
  [sym_module_definition] = "module_definition",
  [sym_module_inheritance] = "module_inheritance",
  [sym_module_block] = "module_block",
  [sym_module_field] = "module_field",
  [sym_enum_definition] = "enum_definition",
  [sym_enum_block] = "enum_block",
  [sym_enum_field] = "enum_field",
  [sym_default_value] = "default_value",
  [sym_interface_definition] = "interface_definition",
  [sym_rpc_block] = "rpc_block",
  [sym_rpc] = "rpc",
  [sym_rpc_in] = "rpc_in",
  [sym_rpc_out] = "rpc_out",
  [sym_rpc_throw] = "rpc_throw",
  [sym_argument_list] = "argument_list",
  [sym_class_definition] = "class_definition",
  [sym_class_modifier] = "class_modifier",
  [sym_class_inheritance] = "class_inheritance",
  [sym_data_structure_definition] = "data_structure_definition",
  [sym_data_structure_type] = "data_structure_type",
  [sym_data_structure_block] = "data_structure_block",
  [sym_field] = "field",
  [sym_field_qualifier] = "field_qualifier",
  [sym_variable] = "variable",
  [sym_type] = "type",
  [sym_type_specifier] = "type_specifier",
  [sym_value] = "value",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_string] = "string",
  [sym_char_literal] = "char_literal",
  [sym_number] = "number",
  [sym_operator] = "operator",
  [sym_constant] = "constant",
  [sym_tag] = "tag",
  [sym_snmp_object_definition] = "snmp_object_definition",
  [sym_snmp_table_definition] = "snmp_table_definition",
  [sym_snmp_interface_definition] = "snmp_interface_definition",
  [sym_snmp_rpc_block] = "snmp_rpc_block",
  [sym_snmp_rpc] = "snmp_rpc",
  [sym_snmp_rpc_in] = "snmp_rpc_in",
  [sym_attribute] = "attribute",
  [sym_attribute_argument_list] = "attribute_argument_list",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_typedef_definition_repeat1] = "typedef_definition_repeat1",
  [aux_sym_module_inheritance_repeat1] = "module_inheritance_repeat1",
  [aux_sym_module_block_repeat1] = "module_block_repeat1",
  [aux_sym_enum_block_repeat1] = "enum_block_repeat1",
  [aux_sym_rpc_block_repeat1] = "rpc_block_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_class_definition_repeat1] = "class_definition_repeat1",
  [aux_sym_class_definition_repeat2] = "class_definition_repeat2",
  [aux_sym_data_structure_block_repeat1] = "data_structure_block_repeat1",
  [aux_sym_value_repeat1] = "value_repeat1",
  [aux_sym_snmp_rpc_block_repeat1] = "snmp_rpc_block_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [aux_sym_comment_repeat2] = "comment_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_package] = anon_sym_package,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_typedef] = anon_sym_typedef,
  [anon_sym_import] = anon_sym_import,
  [sym_path] = sym_path,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_out] = anon_sym_out,
  [anon_sym_throw] = anon_sym_throw,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_abstract] = anon_sym_abstract,
  [anon_sym_local] = anon_sym_local,
  [anon_sym_union] = anon_sym_union,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_static] = anon_sym_static,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_uint] = anon_sym_uint,
  [anon_sym_long] = anon_sym_long,
  [anon_sym_ulong] = anon_sym_ulong,
  [anon_sym_byte] = anon_sym_byte,
  [anon_sym_ubyte] = anon_sym_ubyte,
  [anon_sym_short] = anon_sym_short,
  [anon_sym_ushort] = anon_sym_ushort,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_bytes] = anon_sym_bytes,
  [anon_sym_xml] = anon_sym_xml,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_LBRACK_RBRACK] = anon_sym_LBRACK_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_string_content] = sym_string_content,
  [anon_sym_c] = anon_sym_c,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [aux_sym_number_token2] = aux_sym_number_token2,
  [aux_sym_number_token3] = aux_sym_number_token3,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_tag_number] = sym_tag_number,
  [sym_identifier] = sym_identifier,
  [anon_sym_snmpObj] = anon_sym_snmpObj,
  [anon_sym_snmpTbl] = anon_sym_snmpTbl,
  [anon_sym_snmpIface] = anon_sym_snmpIface,
  [anon_sym_AT] = anon_sym_AT,
  [sym_attribute_content] = sym_attribute_content,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [aux_sym_comment_token3] = aux_sym_comment_token3,
  [aux_sym_comment_token4] = aux_sym_comment_token4,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_comment_token5] = aux_sym_comment_token5,
  [aux_sym_comment_token6] = aux_sym_comment_token6,
  [aux_sym_comment_token7] = aux_sym_comment_token7,
  [aux_sym_comment_token8] = aux_sym_comment_token8,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [sym_doc_ref] = sym_doc_ref,
  [sym_source_file] = sym_source_file,
  [sym_package_definition] = sym_package_definition,
  [sym_typedef_definition] = sym_typedef_definition,
  [sym_import_definition] = sym_import_definition,
  [sym_module_definition] = sym_module_definition,
  [sym_module_inheritance] = sym_module_inheritance,
  [sym_module_block] = sym_module_block,
  [sym_module_field] = sym_module_field,
  [sym_enum_definition] = sym_enum_definition,
  [sym_enum_block] = sym_enum_block,
  [sym_enum_field] = sym_enum_field,
  [sym_default_value] = sym_default_value,
  [sym_interface_definition] = sym_interface_definition,
  [sym_rpc_block] = sym_rpc_block,
  [sym_rpc] = sym_rpc,
  [sym_rpc_in] = sym_rpc_in,
  [sym_rpc_out] = sym_rpc_out,
  [sym_rpc_throw] = sym_rpc_throw,
  [sym_argument_list] = sym_argument_list,
  [sym_class_definition] = sym_class_definition,
  [sym_class_modifier] = sym_class_modifier,
  [sym_class_inheritance] = sym_class_inheritance,
  [sym_data_structure_definition] = sym_data_structure_definition,
  [sym_data_structure_type] = sym_data_structure_type,
  [sym_data_structure_block] = sym_data_structure_block,
  [sym_field] = sym_field,
  [sym_field_qualifier] = sym_field_qualifier,
  [sym_variable] = sym_variable,
  [sym_type] = sym_type,
  [sym_type_specifier] = sym_type_specifier,
  [sym_value] = sym_value,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_string] = sym_string,
  [sym_char_literal] = sym_char_literal,
  [sym_number] = sym_number,
  [sym_operator] = sym_operator,
  [sym_constant] = sym_constant,
  [sym_tag] = sym_tag,
  [sym_snmp_object_definition] = sym_snmp_object_definition,
  [sym_snmp_table_definition] = sym_snmp_table_definition,
  [sym_snmp_interface_definition] = sym_snmp_interface_definition,
  [sym_snmp_rpc_block] = sym_snmp_rpc_block,
  [sym_snmp_rpc] = sym_snmp_rpc,
  [sym_snmp_rpc_in] = sym_snmp_rpc_in,
  [sym_attribute] = sym_attribute,
  [sym_attribute_argument_list] = sym_attribute_argument_list,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_typedef_definition_repeat1] = aux_sym_typedef_definition_repeat1,
  [aux_sym_module_inheritance_repeat1] = aux_sym_module_inheritance_repeat1,
  [aux_sym_module_block_repeat1] = aux_sym_module_block_repeat1,
  [aux_sym_enum_block_repeat1] = aux_sym_enum_block_repeat1,
  [aux_sym_rpc_block_repeat1] = aux_sym_rpc_block_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_class_definition_repeat1] = aux_sym_class_definition_repeat1,
  [aux_sym_class_definition_repeat2] = aux_sym_class_definition_repeat2,
  [aux_sym_data_structure_block_repeat1] = aux_sym_data_structure_block_repeat1,
  [aux_sym_value_repeat1] = aux_sym_value_repeat1,
  [aux_sym_snmp_rpc_block_repeat1] = aux_sym_snmp_rpc_block_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
  [aux_sym_comment_repeat2] = aux_sym_comment_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_typedef] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_out] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_throw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_abstract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_local] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_union] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_static] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_long] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ulong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ubyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_short] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ushort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_c] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_tag_number] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_snmpObj] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_snmpTbl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_snmpIface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [sym_attribute_content] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token8] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_doc_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_package_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_typedef_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_import_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_module_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_module_inheritance] = {
    .visible = true,
    .named = true,
  },
  [sym_module_block] = {
    .visible = true,
    .named = true,
  },
  [sym_module_field] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_block] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_field] = {
    .visible = true,
    .named = true,
  },
  [sym_default_value] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_rpc_block] = {
    .visible = true,
    .named = true,
  },
  [sym_rpc] = {
    .visible = true,
    .named = true,
  },
  [sym_rpc_in] = {
    .visible = true,
    .named = true,
  },
  [sym_rpc_out] = {
    .visible = true,
    .named = true,
  },
  [sym_rpc_throw] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_class_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_class_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_class_inheritance] = {
    .visible = true,
    .named = true,
  },
  [sym_data_structure_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_data_structure_type] = {
    .visible = true,
    .named = true,
  },
  [sym_data_structure_block] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_field_qualifier] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_char_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_snmp_object_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_snmp_table_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_snmp_interface_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_snmp_rpc_block] = {
    .visible = true,
    .named = true,
  },
  [sym_snmp_rpc] = {
    .visible = true,
    .named = true,
  },
  [sym_snmp_rpc_in] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_typedef_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_inheritance_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rpc_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_definition_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_data_structure_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_snmp_rpc_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_repeat2] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 9,
  [14] = 8,
  [15] = 10,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 17,
  [82] = 82,
  [83] = 27,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 29,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 22,
  [98] = 26,
  [99] = 99,
  [100] = 28,
  [101] = 30,
  [102] = 78,
  [103] = 17,
  [104] = 104,
  [105] = 26,
  [106] = 30,
  [107] = 22,
  [108] = 28,
  [109] = 9,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 8,
  [114] = 114,
  [115] = 115,
  [116] = 10,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 9,
  [122] = 8,
  [123] = 10,
  [124] = 124,
  [125] = 125,
  [126] = 125,
  [127] = 127,
  [128] = 127,
  [129] = 125,
  [130] = 127,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 27,
  [143] = 143,
  [144] = 29,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 17,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 78,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 30,
  [195] = 22,
  [196] = 28,
  [197] = 197,
  [198] = 26,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 219,
  [222] = 219,
  [223] = 223,
  [224] = 219,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 227,
  [229] = 229,
  [230] = 227,
  [231] = 231,
  [232] = 232,
  [233] = 227,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 99,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 283,
  [313] = 274,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 283,
  [319] = 319,
  [320] = 320,
  [321] = 283,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(191);
      ADVANCE_MAP(
        '"', 276,
        '&', 274,
        '(', 220,
        ')', 221,
        '*', 294,
        '+', 296,
        ',', 203,
        '-', 297,
        '.', 176,
        '/', 298,
        '0', 287,
        ':', 202,
        ';', 194,
        '<', 45,
        '=', 209,
        '>', 46,
        '?', 273,
        '@', 371,
        '[', 49,
        '\\', 3,
        'a', 59,
        'b', 133,
        'c', 280,
        'd', 131,
        'e', 122,
        'f', 50,
        'i', 113,
        'l', 125,
        'm', 126,
        'n', 166,
        'o', 165,
        'p', 51,
        's', 95,
        't', 94,
        'u', 60,
        'v', 129,
        'x', 116,
        '{', 204,
        '|', 299,
        '}', 205,
        '~', 300,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(188);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(284);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(29);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(29);
      if (lookahead == '\r') SKIP(1);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(29);
      if (lookahead == '\r') SKIP(1);
      if (lookahead == 'c') ADVANCE(510);
      if (lookahead == 'e') ADVANCE(513);
      if (lookahead == 'r') ADVANCE(505);
      if (lookahead == 's') ADVANCE(507);
      if (lookahead == 't') ADVANCE(523);
      if (lookahead == 'u') ADVANCE(514);
      if (lookahead == 'a' ||
          lookahead == 'p') ADVANCE(524);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(34);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(34);
      if (lookahead == '\r') SKIP(4);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(30);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(30);
      if (lookahead == '\r') SKIP(6);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(42);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(42);
      if (lookahead == '\r') SKIP(8);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(42);
      if (lookahead == '/') ADVANCE(380);
      if (lookahead == '0') ADVANCE(494);
      if (lookahead == '@') ADVANCE(372);
      if (lookahead == '\\') ADVANCE(527);
      if (lookahead == 'b') ADVANCE(464);
      if (lookahead == 'd') ADVANCE(454);
      if (lookahead == 'i') ADVANCE(450);
      if (lookahead == 'l') ADVANCE(459);
      if (lookahead == 's') ADVANCE(426);
      if (lookahead == 'u') ADVANCE(394);
      if (lookahead == 'v') ADVANCE(455);
      if (lookahead == 'x') ADVANCE(441);
      if (lookahead == '}') ADVANCE(206);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(381);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(497);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(31);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(31);
      if (lookahead == '\r') SKIP(11);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(33);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(33);
      if (lookahead == '\r') SKIP(13);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(43);
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(43);
      if (lookahead == '\r') SKIP(15);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(43);
      if (lookahead == '/') ADVANCE(380);
      if (lookahead == '0') ADVANCE(494);
      if (lookahead == '@') ADVANCE(372);
      if (lookahead == '\\') ADVANCE(527);
      if (lookahead == '}') ADVANCE(206);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(382);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(497);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(32);
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(32);
      if (lookahead == '\r') SKIP(18);
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(44);
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(44);
      if (lookahead == '\r') SKIP(20);
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(44);
      if (lookahead == '/') ADVANCE(380);
      if (lookahead == '0') ADVANCE(494);
      if (lookahead == '\\') ADVANCE(527);
      if (lookahead == '}') ADVANCE(206);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(383);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(497);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(532);
      if (lookahead == '*') ADVANCE(534);
      if (lookahead == '\\') ADVANCE(528);
      if (lookahead != 0) ADVANCE(531);
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(35);
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(35);
      if (lookahead == '\r') SKIP(24);
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(278);
      if (lookahead == '\r') ADVANCE(277);
      if (lookahead != 0) ADVANCE(279);
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(48);
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(48);
      if (lookahead == '\r') SKIP(27);
      END_STATE();
    case 29:
      ADVANCE_MAP(
        '"', 276,
        '&', 274,
        '(', 220,
        ')', 221,
        '*', 294,
        '+', 296,
        ',', 203,
        '-', 297,
        '.', 176,
        '/', 298,
        '0', 287,
        ':', 202,
        ';', 194,
        '<', 45,
        '=', 209,
        '>', 46,
        '?', 273,
        '@', 371,
        '[', 49,
      );
      if (lookahead == '\\') SKIP(2);
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == 'b') ADVANCE(133);
      if (lookahead == 'c') ADVANCE(280);
      if (lookahead == 'd') ADVANCE(131);
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == 'f') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(113);
      if (lookahead == 'l') ADVANCE(125);
      if (lookahead == 'm') ADVANCE(126);
      if (lookahead == 'n') ADVANCE(166);
      if (lookahead == 'o') ADVANCE(165);
      if (lookahead == 'p') ADVANCE(51);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead == 'u') ADVANCE(60);
      if (lookahead == 'v') ADVANCE(129);
      if (lookahead == 'x') ADVANCE(116);
      if (lookahead == '{') ADVANCE(204);
      if (lookahead == '|') ADVANCE(299);
      if (lookahead == '}') ADVANCE(205);
      if (lookahead == '~') ADVANCE(300);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(284);
      END_STATE();
    case 30:
      ADVANCE_MAP(
        '"', 276,
        '&', 274,
        '(', 220,
        '*', 295,
        '+', 296,
        '-', 297,
        '.', 176,
        '/', 298,
        '0', 287,
        '<', 45,
        '>', 46,
      );
      if (lookahead == '\\') SKIP(7);
      if (lookahead == 'c') ADVANCE(281);
      if (lookahead == 'f') ADVANCE(309);
      if (lookahead == 't') ADVANCE(348);
      if (lookahead == '|') ADVANCE(299);
      if (lookahead == '~') ADVANCE(300);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 31:
      ADVANCE_MAP(
        '&', 274,
        '(', 220,
        ')', 221,
        '*', 295,
        '+', 296,
        ',', 203,
        '-', 297,
        '.', 176,
        '/', 298,
        '0', 287,
        ';', 194,
        '<', 45,
        '>', 46,
      );
      if (lookahead == '\\') SKIP(12);
      if (lookahead == 'f') ADVANCE(309);
      if (lookahead == 't') ADVANCE(348);
      if (lookahead == '|') ADVANCE(299);
      if (lookahead == '~') ADVANCE(300);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 32:
      ADVANCE_MAP(
        '&', 274,
        '(', 220,
        ')', 221,
        '/', 39,
        '0', 305,
        '?', 273,
        '@', 371,
        '[', 49,
      );
      if (lookahead == '\\') SKIP(19);
      if (lookahead == '}') ADVANCE(205);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(32);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 33:
      if (lookahead == '(') ADVANCE(220);
      if (lookahead == ')') ADVANCE(221);
      if (lookahead == '@') ADVANCE(371);
      if (lookahead == '\\') SKIP(14);
      if (lookahead == 'b') ADVANCE(346);
      if (lookahead == 'd') ADVANCE(340);
      if (lookahead == 'i') ADVANCE(336);
      if (lookahead == 'l') ADVANCE(343);
      if (lookahead == 's') ADVANCE(323);
      if (lookahead == 'u') ADVANCE(310);
      if (lookahead == 'v') ADVANCE(341);
      if (lookahead == 'x') ADVANCE(334);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 34:
      if (lookahead == '(') ADVANCE(220);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead == '0') ADVANCE(305);
      if (lookahead == '@') ADVANCE(371);
      if (lookahead == '\\') SKIP(5);
      if (lookahead == 'b') ADVANCE(346);
      if (lookahead == 'd') ADVANCE(340);
      if (lookahead == 'i') ADVANCE(336);
      if (lookahead == 'l') ADVANCE(343);
      if (lookahead == 's') ADVANCE(322);
      if (lookahead == 'u') ADVANCE(310);
      if (lookahead == 'v') ADVANCE(341);
      if (lookahead == 'x') ADVANCE(334);
      if (lookahead == '}') ADVANCE(205);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(34);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 35:
      if (lookahead == '(') ADVANCE(220);
      if (lookahead == '\\') SKIP(25);
      if (lookahead == 'n') ADVANCE(362);
      if (lookahead == 'v') ADVANCE(341);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 36:
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(377);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == ')') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == ')') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '*') ADVANCE(529);
      if (lookahead == '/') ADVANCE(378);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == 'x') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == '.') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '/') ADVANCE(39);
      if (lookahead == '0') ADVANCE(305);
      if (lookahead == '@') ADVANCE(371);
      if (lookahead == '\\') SKIP(9);
      if (lookahead == 'b') ADVANCE(346);
      if (lookahead == 'd') ADVANCE(340);
      if (lookahead == 'i') ADVANCE(336);
      if (lookahead == 'l') ADVANCE(343);
      if (lookahead == 's') ADVANCE(322);
      if (lookahead == 'u') ADVANCE(310);
      if (lookahead == 'v') ADVANCE(341);
      if (lookahead == 'x') ADVANCE(334);
      if (lookahead == '}') ADVANCE(205);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(42);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 43:
      if (lookahead == '/') ADVANCE(39);
      if (lookahead == '0') ADVANCE(305);
      if (lookahead == '@') ADVANCE(371);
      if (lookahead == '\\') SKIP(16);
      if (lookahead == '}') ADVANCE(205);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(43);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 44:
      if (lookahead == '/') ADVANCE(39);
      if (lookahead == '0') ADVANCE(305);
      if (lookahead == '\\') SKIP(21);
      if (lookahead == '}') ADVANCE(205);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(44);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 45:
      if (lookahead == '<') ADVANCE(291);
      END_STATE();
    case 46:
      if (lookahead == '>') ADVANCE(292);
      END_STATE();
    case 47:
      if (lookahead == 'I') ADVANCE(88);
      if (lookahead == 'O') ADVANCE(61);
      if (lookahead == 'T') ADVANCE(63);
      END_STATE();
    case 48:
      if (lookahead == '\\') SKIP(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 49:
      if (lookahead == ']') ADVANCE(275);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 59:
      if (lookahead == 'b') ADVANCE(149);
      END_STATE();
    case 60:
      if (lookahead == 'b') ADVANCE(173);
      if (lookahead == 'i') ADVANCE(124);
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead == 'n') ADVANCE(100);
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 61:
      if (lookahead == 'b') ADVANCE(101);
      END_STATE();
    case 62:
      if (lookahead == 'b') ADVANCE(111);
      END_STATE();
    case 63:
      if (lookahead == 'b') ADVANCE(107);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(102);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(232);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(157);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(159);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(83);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(56);
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(215);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(170);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 87:
      if (lookahead == 'f') ADVANCE(195);
      END_STATE();
    case 88:
      if (lookahead == 'f') ADVANCE(55);
      END_STATE();
    case 89:
      if (lookahead == 'f') ADVANCE(58);
      END_STATE();
    case 90:
      if (lookahead == 'g') ADVANCE(243);
      END_STATE();
    case 91:
      if (lookahead == 'g') ADVANCE(246);
      END_STATE();
    case 92:
      if (lookahead == 'g') ADVANCE(237);
      END_STATE();
    case 93:
      if (lookahead == 'g') ADVANCE(81);
      END_STATE();
    case 94:
      if (lookahead == 'h') ADVANCE(145);
      if (lookahead == 'r') ADVANCE(168);
      if (lookahead == 'y') ADVANCE(139);
      END_STATE();
    case 95:
      if (lookahead == 'h') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(117);
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 96:
      if (lookahead == 'h') ADVANCE(137);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(123);
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 101:
      if (lookahead == 'j') ADVANCE(365);
      END_STATE();
    case 102:
      if (lookahead == 'k') ADVANCE(53);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(270);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(261);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(213);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(226);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(367);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 113:
      if (lookahead == 'm') ADVANCE(140);
      if (lookahead == 'n') ADVANCE(212);
      END_STATE();
    case 114:
      if (lookahead == 'm') ADVANCE(140);
      if (lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 115:
      if (lookahead == 'm') ADVANCE(207);
      END_STATE();
    case 116:
      if (lookahead == 'm') ADVANCE(103);
      END_STATE();
    case 117:
      if (lookahead == 'm') ADVANCE(138);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(228);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(117);
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(169);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(132);
      if (lookahead == 'y') ADVANCE(152);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 137:
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 138:
      if (lookahead == 'p') ADVANCE(47);
      END_STATE();
    case 139:
      if (lookahead == 'p') ADVANCE(85);
      END_STATE();
    case 140:
      if (lookahead == 'p') ADVANCE(136);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 144:
      if (lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 145:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 146:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 148:
      if (lookahead == 's') ADVANCE(222);
      END_STATE();
    case 149:
      if (lookahead == 's') ADVANCE(160);
      END_STATE();
    case 150:
      if (lookahead == 's') ADVANCE(148);
      END_STATE();
    case 151:
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(218);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(230);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 164:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 165:
      if (lookahead == 'u') ADVANCE(153);
      END_STATE();
    case 166:
      if (lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 167:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 168:
      if (lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 169:
      if (lookahead == 'u') ADVANCE(115);
      END_STATE();
    case 170:
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 171:
      if (lookahead == 'w') ADVANCE(219);
      END_STATE();
    case 172:
      if (lookahead == 'y') ADVANCE(139);
      END_STATE();
    case 173:
      if (lookahead == 'y') ADVANCE(162);
      END_STATE();
    case 174:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 175:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      END_STATE();
    case 176:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    case 177:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      END_STATE();
    case 178:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(285);
      END_STATE();
    case 179:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(307);
      END_STATE();
    case 180:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 181:
      if (eof) ADVANCE(191);
      if (lookahead == '\n') SKIP(188);
      END_STATE();
    case 182:
      if (eof) ADVANCE(191);
      if (lookahead == '\n') SKIP(188);
      if (lookahead == '\r') SKIP(181);
      END_STATE();
    case 183:
      if (eof) ADVANCE(191);
      if (lookahead == '\n') SKIP(189);
      END_STATE();
    case 184:
      if (eof) ADVANCE(191);
      if (lookahead == '\n') SKIP(189);
      if (lookahead == '\r') SKIP(183);
      END_STATE();
    case 185:
      if (eof) ADVANCE(191);
      if (lookahead == '\n') SKIP(190);
      END_STATE();
    case 186:
      if (eof) ADVANCE(191);
      if (lookahead == '\n') SKIP(190);
      if (lookahead == '\r') SKIP(185);
      END_STATE();
    case 187:
      if (eof) ADVANCE(191);
      if (lookahead == '\n') SKIP(190);
      if (lookahead == '/') ADVANCE(380);
      if (lookahead == '@') ADVANCE(372);
      if (lookahead == '\\') ADVANCE(527);
      if (lookahead == 'a') ADVANCE(395);
      if (lookahead == 'c') ADVANCE(438);
      if (lookahead == 'e') ADVANCE(446);
      if (lookahead == 'i') ADVANCE(442);
      if (lookahead == 'l') ADVANCE(457);
      if (lookahead == 'm') ADVANCE(458);
      if (lookahead == 'p') ADVANCE(389);
      if (lookahead == 's') ADVANCE(447);
      if (lookahead == 't') ADVANCE(495);
      if (lookahead == 'u') ADVANCE(448);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(384);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 188:
      if (eof) ADVANCE(191);
      ADVANCE_MAP(
        '"', 276,
        '&', 274,
        '(', 220,
        ')', 221,
        '*', 294,
        '+', 296,
        ',', 203,
        '-', 297,
        '.', 176,
        '/', 298,
        '0', 287,
        ':', 202,
        ';', 194,
        '<', 45,
        '=', 209,
        '>', 46,
        '?', 273,
        '@', 371,
        '[', 49,
      );
      if (lookahead == '\\') SKIP(182);
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == 'b') ADVANCE(133);
      if (lookahead == 'c') ADVANCE(280);
      if (lookahead == 'd') ADVANCE(131);
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == 'f') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(113);
      if (lookahead == 'l') ADVANCE(125);
      if (lookahead == 'm') ADVANCE(126);
      if (lookahead == 'n') ADVANCE(166);
      if (lookahead == 'o') ADVANCE(165);
      if (lookahead == 'p') ADVANCE(51);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead == 'u') ADVANCE(60);
      if (lookahead == 'v') ADVANCE(129);
      if (lookahead == 'x') ADVANCE(116);
      if (lookahead == '{') ADVANCE(204);
      if (lookahead == '|') ADVANCE(299);
      if (lookahead == '}') ADVANCE(205);
      if (lookahead == '~') ADVANCE(300);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(188);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(284);
      END_STATE();
    case 189:
      if (eof) ADVANCE(191);
      if (lookahead == '(') ADVANCE(220);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead == ';') ADVANCE(194);
      if (lookahead == '@') ADVANCE(371);
      if (lookahead == '\\') SKIP(184);
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == 'c') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == 'i') ADVANCE(114);
      if (lookahead == 'l') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(126);
      if (lookahead == 'p') ADVANCE(51);
      if (lookahead == 's') ADVANCE(120);
      if (lookahead == 't') ADVANCE(172);
      if (lookahead == 'u') ADVANCE(118);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(189);
      END_STATE();
    case 190:
      if (eof) ADVANCE(191);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead == '@') ADVANCE(371);
      if (lookahead == '\\') SKIP(186);
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == 'c') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == 'i') ADVANCE(114);
      if (lookahead == 'l') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(126);
      if (lookahead == 'p') ADVANCE(51);
      if (lookahead == 's') ADVANCE(120);
      if (lookahead == 't') ADVANCE(172);
      if (lookahead == 'u') ADVANCE(118);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_package);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_typedef);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_typedef);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '*' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_enum);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_interface);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_void);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_void);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_throw);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_local);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_union);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_struct);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_static);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_static);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_uint);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_uint);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_uint);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_long);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_long);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_ulong);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_ulong);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_ulong);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == 's') ADVANCE(267);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == 's') ADVANCE(268);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == 's') ADVANCE(269);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_ubyte);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_ubyte);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_ubyte);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_short);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_short);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_ushort);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_ushort);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_ushort);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_double);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_double);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_xml);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_xml);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\n') ADVANCE(278);
      if (lookahead == '\\') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(279);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(279);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_c);
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_c);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '.') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(285);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == 'x') ADVANCE(289);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(288);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(288);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(285);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(293);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == '0') ADVANCE(40);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(284);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_tag_number);
      if (lookahead == 'x') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_tag_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_tag_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(359);
      if (lookahead == 'r') ADVANCE(327);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(330);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(363);
      if (lookahead == 'i') ADVANCE(339);
      if (lookahead == 'l') ADVANCE(345);
      if (lookahead == 's') ADVANCE(324);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(332);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(233);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(216);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(250);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(253);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(302);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(304);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(244);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(247);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(238);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(342);
      if (lookahead == 't') ADVANCE(308);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(342);
      if (lookahead == 't') ADVANCE(349);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(347);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(313);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(312);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(338);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(271);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(262);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(352);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(214);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(316);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(331);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(328);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(319);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(354);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(320);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(321);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(355);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(360);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(325);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(350);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(335);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(329);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(337);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(344);
      if (lookahead == 'y') ADVANCE(353);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(351);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(361);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(327);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(356);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(357);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(314);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(235);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(241);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(256);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(259);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(315);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(326);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(311);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(317);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(333);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(358);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_snmpObj);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_snmpObj);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_snmpTbl);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_snmpTbl);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_snmpIface);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_snmpIface);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_attribute_content);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '\r') ADVANCE(374);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(376);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_attribute_content);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(376);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_attribute_content);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(373);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(376);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_attribute_content);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_attribute_content);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(377);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(530);
      if (lookahead == '/') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      ADVANCE_MAP(
        '/', 380,
        '0', 494,
        '@', 372,
        'b', 464,
        'd', 454,
        'i', 450,
        'l', 459,
        's', 426,
        'u', 394,
        'v', 455,
        'x', 441,
        '}', 206,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(381);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(497);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(380);
      if (lookahead == '0') ADVANCE(494);
      if (lookahead == '@') ADVANCE(372);
      if (lookahead == '}') ADVANCE(206);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(382);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(497);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(380);
      if (lookahead == '0') ADVANCE(494);
      if (lookahead == '}') ADVANCE(206);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(383);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(497);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      ADVANCE_MAP(
        '/', 380,
        '@', 372,
        'a', 395,
        'c', 438,
        'e', 446,
        'i', 442,
        'l', 457,
        'm', 458,
        'p', 389,
        's', 447,
        't', 495,
        'u', 448,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(384);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'I') ADVANCE(421);
      if (lookahead == 'O') ADVANCE(396);
      if (lookahead == 'T') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'a') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'a') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'a') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'a') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'a') ADVANCE(489);
      if (lookahead == 'r') ADVANCE(430);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'a') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'a') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'a') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'b') ADVANCE(496);
      if (lookahead == 'i') ADVANCE(453);
      if (lookahead == 'l') ADVANCE(461);
      if (lookahead == 's') ADVANCE(427);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'b') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'b') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'b') ADVANCE(439);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'b') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'c') ADVANCE(234);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'c') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'c') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'c') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'c') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'c') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'c') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'd') ADVANCE(217);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'd') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'd') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'e') ADVANCE(251);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'e') ADVANCE(254);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'e') ADVANCE(266);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'e') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'e') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'e') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'e') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'e') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'e') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'f') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'f') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'f') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'g') ADVANCE(245);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'g') ADVANCE(248);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'g') ADVANCE(239);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'g') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'h') ADVANCE(456);
      if (lookahead == 't') ADVANCE(390);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'h') ADVANCE(465);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'i') ADVANCE(406);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'i') ADVANCE(399);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'i') ADVANCE(452);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'i') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'j') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'k') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'l') ADVANCE(272);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'l') ADVANCE(263);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'l') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'l') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'l') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'l') ADVANCE(411);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'l') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'm') ADVANCE(434);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'm') ADVANCE(468);
      if (lookahead == 'n') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'm') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'm') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'n') ADVANCE(422);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'n') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'n') ADVANCE(444);
      if (lookahead == 't') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'n') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'n') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'n') ADVANCE(479);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'n') ADVANCE(423);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'n') ADVANCE(424);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'n') ADVANCE(480);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'o') ADVANCE(490);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'o') ADVANCE(428);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'o') ADVANCE(472);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'o') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'o') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'o') ADVANCE(445);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'o') ADVANCE(435);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'o') ADVANCE(451);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'o') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'o') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'o') ADVANCE(460);
      if (lookahead == 'y') ADVANCE(478);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'o') ADVANCE(473);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'p') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'p') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'p') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'r') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'r') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'r') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'r') ADVANCE(481);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'r') ADVANCE(482);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'r') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 's') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 's') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 's') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 't') ADVANCE(409);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 't') ADVANCE(236);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 't') ADVANCE(242);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 't') ADVANCE(257);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 't') ADVANCE(260);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 't') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 't') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 't') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 't') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 't') ADVANCE(410);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 't') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 't') ADVANCE(429);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'u') ADVANCE(397);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'u') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'u') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'u') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'x') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'y') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'y') ADVANCE(487);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(519);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(505);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(524);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(508);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(503);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(504);
      if (lookahead == 't') ADVANCE(517);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'f') ADVANCE(524);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(515);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(501);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(524);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(524);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(521);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(512);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'p') ADVANCE(506);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(522);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(524);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(518);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(524);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(511);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(502);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'y') ADVANCE(516);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_comment_token3);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_comment_token4);
      ADVANCE_MAP(
        'c', 510,
        'e', 513,
        'r', 505,
        's', 507,
        't', 523,
        'u', 514,
        'a', 524,
        'p', 524,
      );
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_comment_token4);
      ADVANCE_MAP(
        'c', 510,
        'e', 513,
        'r', 505,
        's', 507,
        't', 523,
        'u', 514,
        'a', 524,
        'p', 524,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(526);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(500);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_comment_token5);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(531);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_comment_token6);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_comment_token7);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_comment_token8);
      if (lookahead == '/') ADVANCE(535);
      if (lookahead != 0) ADVANCE(533);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_doc_ref);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 189},
  [2] = {.lex_state = 189},
  [3] = {.lex_state = 189},
  [4] = {.lex_state = 34},
  [5] = {.lex_state = 34},
  [6] = {.lex_state = 34},
  [7] = {.lex_state = 30},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 31},
  [12] = {.lex_state = 31},
  [13] = {.lex_state = 187},
  [14] = {.lex_state = 187},
  [15] = {.lex_state = 187},
  [16] = {.lex_state = 31},
  [17] = {.lex_state = 34},
  [18] = {.lex_state = 31},
  [19] = {.lex_state = 33},
  [20] = {.lex_state = 33},
  [21] = {.lex_state = 33},
  [22] = {.lex_state = 34},
  [23] = {.lex_state = 34},
  [24] = {.lex_state = 34},
  [25] = {.lex_state = 34},
  [26] = {.lex_state = 34},
  [27] = {.lex_state = 34},
  [28] = {.lex_state = 34},
  [29] = {.lex_state = 34},
  [30] = {.lex_state = 34},
  [31] = {.lex_state = 31},
  [32] = {.lex_state = 31},
  [33] = {.lex_state = 33},
  [34] = {.lex_state = 31},
  [35] = {.lex_state = 31},
  [36] = {.lex_state = 33},
  [37] = {.lex_state = 33},
  [38] = {.lex_state = 189},
  [39] = {.lex_state = 189},
  [40] = {.lex_state = 189},
  [41] = {.lex_state = 34},
  [42] = {.lex_state = 189},
  [43] = {.lex_state = 189},
  [44] = {.lex_state = 189},
  [45] = {.lex_state = 189},
  [46] = {.lex_state = 189},
  [47] = {.lex_state = 189},
  [48] = {.lex_state = 189},
  [49] = {.lex_state = 189},
  [50] = {.lex_state = 189},
  [51] = {.lex_state = 189},
  [52] = {.lex_state = 189},
  [53] = {.lex_state = 189},
  [54] = {.lex_state = 189},
  [55] = {.lex_state = 189},
  [56] = {.lex_state = 189},
  [57] = {.lex_state = 189},
  [58] = {.lex_state = 189},
  [59] = {.lex_state = 189},
  [60] = {.lex_state = 189},
  [61] = {.lex_state = 189},
  [62] = {.lex_state = 189},
  [63] = {.lex_state = 189},
  [64] = {.lex_state = 189},
  [65] = {.lex_state = 189},
  [66] = {.lex_state = 189},
  [67] = {.lex_state = 189},
  [68] = {.lex_state = 189},
  [69] = {.lex_state = 189},
  [70] = {.lex_state = 189},
  [71] = {.lex_state = 189},
  [72] = {.lex_state = 189},
  [73] = {.lex_state = 189},
  [74] = {.lex_state = 189},
  [75] = {.lex_state = 189},
  [76] = {.lex_state = 189},
  [77] = {.lex_state = 189},
  [78] = {.lex_state = 33},
  [79] = {.lex_state = 189},
  [80] = {.lex_state = 189},
  [81] = {.lex_state = 33},
  [82] = {.lex_state = 189},
  [83] = {.lex_state = 189},
  [84] = {.lex_state = 189},
  [85] = {.lex_state = 189},
  [86] = {.lex_state = 189},
  [87] = {.lex_state = 189},
  [88] = {.lex_state = 189},
  [89] = {.lex_state = 189},
  [90] = {.lex_state = 189},
  [91] = {.lex_state = 33},
  [92] = {.lex_state = 33},
  [93] = {.lex_state = 33},
  [94] = {.lex_state = 33},
  [95] = {.lex_state = 33},
  [96] = {.lex_state = 33},
  [97] = {.lex_state = 33},
  [98] = {.lex_state = 33},
  [99] = {.lex_state = 34},
  [100] = {.lex_state = 33},
  [101] = {.lex_state = 33},
  [102] = {.lex_state = 189},
  [103] = {.lex_state = 189},
  [104] = {.lex_state = 33},
  [105] = {.lex_state = 189},
  [106] = {.lex_state = 189},
  [107] = {.lex_state = 189},
  [108] = {.lex_state = 189},
  [109] = {.lex_state = 17},
  [110] = {.lex_state = 32},
  [111] = {.lex_state = 32},
  [112] = {.lex_state = 32},
  [113] = {.lex_state = 17},
  [114] = {.lex_state = 32},
  [115] = {.lex_state = 32},
  [116] = {.lex_state = 17},
  [117] = {.lex_state = 32},
  [118] = {.lex_state = 32},
  [119] = {.lex_state = 32},
  [120] = {.lex_state = 32},
  [121] = {.lex_state = 22},
  [122] = {.lex_state = 22},
  [123] = {.lex_state = 22},
  [124] = {.lex_state = 23},
  [125] = {.lex_state = 23},
  [126] = {.lex_state = 23},
  [127] = {.lex_state = 23},
  [128] = {.lex_state = 23},
  [129] = {.lex_state = 23},
  [130] = {.lex_state = 23},
  [131] = {.lex_state = 32},
  [132] = {.lex_state = 32},
  [133] = {.lex_state = 32},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 32},
  [138] = {.lex_state = 32},
  [139] = {.lex_state = 32},
  [140] = {.lex_state = 32},
  [141] = {.lex_state = 32},
  [142] = {.lex_state = 32},
  [143] = {.lex_state = 32},
  [144] = {.lex_state = 32},
  [145] = {.lex_state = 32},
  [146] = {.lex_state = 32},
  [147] = {.lex_state = 32},
  [148] = {.lex_state = 32},
  [149] = {.lex_state = 32},
  [150] = {.lex_state = 32},
  [151] = {.lex_state = 32},
  [152] = {.lex_state = 32},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 32},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 189},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 32},
  [160] = {.lex_state = 32},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 32},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 189},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 35},
  [176] = {.lex_state = 35},
  [177] = {.lex_state = 189},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 32},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 32},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 32},
  [195] = {.lex_state = 32},
  [196] = {.lex_state = 32},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 32},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 32},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 32},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 32},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 32},
  [219] = {.lex_state = 32},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 32},
  [222] = {.lex_state = 32},
  [223] = {.lex_state = 189},
  [224] = {.lex_state = 32},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 375},
  [228] = {.lex_state = 375},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 375},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 375},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 32},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 32},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 32},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 278},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 32},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 32},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 32},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 32},
  [260] = {.lex_state = 32},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 32},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 32},
  [267] = {.lex_state = 32},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 32},
  [271] = {.lex_state = 32},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 32},
  [279] = {.lex_state = 32},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 32},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 32},
  [288] = {.lex_state = 32},
  [289] = {.lex_state = 32},
  [290] = {.lex_state = 32},
  [291] = {.lex_state = 32},
  [292] = {.lex_state = 32},
  [293] = {.lex_state = 32},
  [294] = {.lex_state = 32},
  [295] = {.lex_state = 32},
  [296] = {.lex_state = 32},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 32},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 32},
  [307] = {.lex_state = 32},
  [308] = {.lex_state = 32},
  [309] = {.lex_state = 32},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 32},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 32},
  [315] = {.lex_state = 32},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 32},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 48},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_typedef] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_out] = ACTIONS(1),
    [anon_sym_throw] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_abstract] = ACTIONS(1),
    [anon_sym_local] = ACTIONS(1),
    [anon_sym_union] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_static] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_uint] = ACTIONS(1),
    [anon_sym_long] = ACTIONS(1),
    [anon_sym_ulong] = ACTIONS(1),
    [anon_sym_byte] = ACTIONS(1),
    [anon_sym_ubyte] = ACTIONS(1),
    [anon_sym_short] = ACTIONS(1),
    [anon_sym_ushort] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_bytes] = ACTIONS(1),
    [anon_sym_xml] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_c] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [aux_sym_number_token2] = ACTIONS(1),
    [aux_sym_number_token3] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_snmpObj] = ACTIONS(1),
    [anon_sym_snmpTbl] = ACTIONS(1),
    [anon_sym_snmpIface] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_comment_token2] = ACTIONS(1),
    [aux_sym_comment_token8] = ACTIONS(1),
    [sym_doc_ref] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(305),
    [sym_package_definition] = STATE(3),
    [sym_typedef_definition] = STATE(3),
    [sym_import_definition] = STATE(3),
    [sym_module_definition] = STATE(3),
    [sym_enum_definition] = STATE(3),
    [sym_interface_definition] = STATE(3),
    [sym_class_definition] = STATE(3),
    [sym_class_modifier] = STATE(157),
    [sym_data_structure_definition] = STATE(3),
    [sym_data_structure_type] = STATE(304),
    [sym_snmp_object_definition] = STATE(3),
    [sym_snmp_table_definition] = STATE(3),
    [sym_snmp_interface_definition] = STATE(3),
    [sym_attribute] = STATE(86),
    [sym_comment] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_typedef_definition_repeat1] = STATE(86),
    [aux_sym_class_definition_repeat1] = STATE(157),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_package] = ACTIONS(5),
    [anon_sym_typedef] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [anon_sym_module] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(13),
    [anon_sym_interface] = ACTIONS(15),
    [anon_sym_class] = ACTIONS(17),
    [anon_sym_abstract] = ACTIONS(19),
    [anon_sym_local] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(21),
    [anon_sym_struct] = ACTIONS(21),
    [anon_sym_snmpObj] = ACTIONS(23),
    [anon_sym_snmpTbl] = ACTIONS(25),
    [anon_sym_snmpIface] = ACTIONS(27),
    [anon_sym_AT] = ACTIONS(29),
    [anon_sym_SLASH_SLASH] = ACTIONS(31),
    [anon_sym_SLASH_STAR] = ACTIONS(33),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      anon_sym_package,
    ACTIONS(40), 1,
      anon_sym_typedef,
    ACTIONS(43), 1,
      anon_sym_import,
    ACTIONS(46), 1,
      anon_sym_module,
    ACTIONS(49), 1,
      anon_sym_enum,
    ACTIONS(52), 1,
      anon_sym_interface,
    ACTIONS(55), 1,
      anon_sym_class,
    ACTIONS(64), 1,
      anon_sym_snmpObj,
    ACTIONS(67), 1,
      anon_sym_snmpTbl,
    ACTIONS(70), 1,
      anon_sym_snmpIface,
    ACTIONS(73), 1,
      anon_sym_AT,
    ACTIONS(76), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_SLASH_STAR,
    STATE(304), 1,
      sym_data_structure_type,
    ACTIONS(58), 2,
      anon_sym_abstract,
      anon_sym_local,
    ACTIONS(61), 2,
      anon_sym_union,
      anon_sym_struct,
    STATE(86), 2,
      sym_attribute,
      aux_sym_typedef_definition_repeat1,
    STATE(157), 2,
      sym_class_modifier,
      aux_sym_class_definition_repeat1,
    STATE(2), 13,
      sym_package_definition,
      sym_typedef_definition,
      sym_import_definition,
      sym_module_definition,
      sym_enum_definition,
      sym_interface_definition,
      sym_class_definition,
      sym_data_structure_definition,
      sym_snmp_object_definition,
      sym_snmp_table_definition,
      sym_snmp_interface_definition,
      sym_comment,
      aux_sym_source_file_repeat1,
  [77] = 20,
    ACTIONS(5), 1,
      anon_sym_package,
    ACTIONS(7), 1,
      anon_sym_typedef,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_module,
    ACTIONS(13), 1,
      anon_sym_enum,
    ACTIONS(15), 1,
      anon_sym_interface,
    ACTIONS(17), 1,
      anon_sym_class,
    ACTIONS(23), 1,
      anon_sym_snmpObj,
    ACTIONS(25), 1,
      anon_sym_snmpTbl,
    ACTIONS(27), 1,
      anon_sym_snmpIface,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(31), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(33), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    STATE(304), 1,
      sym_data_structure_type,
    ACTIONS(19), 2,
      anon_sym_abstract,
      anon_sym_local,
    ACTIONS(21), 2,
      anon_sym_union,
      anon_sym_struct,
    STATE(86), 2,
      sym_attribute,
      aux_sym_typedef_definition_repeat1,
    STATE(157), 2,
      sym_class_modifier,
      aux_sym_class_definition_repeat1,
    STATE(2), 13,
      sym_package_definition,
      sym_typedef_definition,
      sym_import_definition,
      sym_module_definition,
      sym_enum_definition,
      sym_interface_definition,
      sym_class_definition,
      sym_data_structure_definition,
      sym_snmp_object_definition,
      sym_snmp_table_definition,
      sym_snmp_interface_definition,
      sym_comment,
      aux_sym_source_file_repeat1,
  [154] = 12,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    ACTIONS(88), 1,
      anon_sym_static,
    ACTIONS(90), 1,
      sym_tag_number,
    ACTIONS(92), 1,
      anon_sym_AT,
    ACTIONS(94), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(96), 1,
      anon_sym_SLASH_STAR,
    STATE(41), 1,
      sym_tag,
    STATE(94), 1,
      sym_field_qualifier,
    STATE(159), 1,
      sym_type,
    STATE(263), 1,
      sym_variable,
    STATE(6), 4,
      sym_field,
      sym_attribute,
      sym_comment,
      aux_sym_data_structure_block_repeat1,
    ACTIONS(86), 15,
      anon_sym_void,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [208] = 12,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    ACTIONS(103), 1,
      anon_sym_static,
    ACTIONS(106), 1,
      sym_tag_number,
    ACTIONS(109), 1,
      anon_sym_AT,
    ACTIONS(112), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(115), 1,
      anon_sym_SLASH_STAR,
    STATE(41), 1,
      sym_tag,
    STATE(94), 1,
      sym_field_qualifier,
    STATE(159), 1,
      sym_type,
    STATE(263), 1,
      sym_variable,
    STATE(5), 4,
      sym_field,
      sym_attribute,
      sym_comment,
      aux_sym_data_structure_block_repeat1,
    ACTIONS(100), 15,
      anon_sym_void,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [262] = 12,
    ACTIONS(88), 1,
      anon_sym_static,
    ACTIONS(90), 1,
      sym_tag_number,
    ACTIONS(92), 1,
      anon_sym_AT,
    ACTIONS(94), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(96), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(118), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym_tag,
    STATE(94), 1,
      sym_field_qualifier,
    STATE(159), 1,
      sym_type,
    STATE(263), 1,
      sym_variable,
    STATE(5), 4,
      sym_field,
      sym_attribute,
      sym_comment,
      aux_sym_data_structure_block_repeat1,
    ACTIONS(86), 15,
      anon_sym_void,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [316] = 12,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      anon_sym_DQUOTE,
    ACTIONS(126), 1,
      anon_sym_c,
    ACTIONS(128), 1,
      aux_sym_number_token1,
    ACTIONS(136), 1,
      sym_identifier,
    STATE(217), 1,
      sym_value,
    ACTIONS(130), 2,
      aux_sym_number_token2,
      aux_sym_number_token3,
    ACTIONS(132), 2,
      anon_sym_STAR,
      anon_sym_DASH,
    ACTIONS(134), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(216), 2,
      sym_string,
      sym_char_literal,
    STATE(11), 5,
      sym_parenthesized_expression,
      sym_number,
      sym_operator,
      sym_constant,
      aux_sym_value_repeat1,
    ACTIONS(122), 8,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_TILDE,
  [368] = 4,
    ACTIONS(142), 1,
      sym_doc_ref,
    STATE(9), 1,
      aux_sym_comment_repeat1,
    ACTIONS(140), 4,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      aux_sym_comment_token4,
    ACTIONS(138), 21,
      anon_sym_RBRACE,
      anon_sym_void,
      anon_sym_static,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [404] = 4,
    ACTIONS(148), 1,
      sym_doc_ref,
    STATE(10), 1,
      aux_sym_comment_repeat1,
    ACTIONS(146), 4,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      aux_sym_comment_token4,
    ACTIONS(144), 21,
      anon_sym_RBRACE,
      anon_sym_void,
      anon_sym_static,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [440] = 4,
    ACTIONS(155), 1,
      sym_doc_ref,
    STATE(10), 1,
      aux_sym_comment_repeat1,
    ACTIONS(152), 4,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      aux_sym_comment_token4,
    ACTIONS(150), 21,
      anon_sym_RBRACE,
      anon_sym_void,
      anon_sym_static,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [476] = 9,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      aux_sym_number_token1,
    ACTIONS(160), 1,
      sym_identifier,
    ACTIONS(130), 2,
      aux_sym_number_token2,
      aux_sym_number_token3,
    ACTIONS(132), 2,
      anon_sym_STAR,
      anon_sym_DASH,
    ACTIONS(134), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(158), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(12), 5,
      sym_parenthesized_expression,
      sym_number,
      sym_operator,
      sym_constant,
      aux_sym_value_repeat1,
    ACTIONS(122), 8,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_TILDE,
  [520] = 9,
    ACTIONS(164), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      aux_sym_number_token1,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(173), 2,
      aux_sym_number_token2,
      aux_sym_number_token3,
    ACTIONS(176), 2,
      anon_sym_STAR,
      anon_sym_DASH,
    ACTIONS(179), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(162), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(12), 5,
      sym_parenthesized_expression,
      sym_number,
      sym_operator,
      sym_constant,
      aux_sym_value_repeat1,
    ACTIONS(167), 8,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_TILDE,
  [564] = 5,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
    ACTIONS(189), 1,
      sym_doc_ref,
    STATE(15), 1,
      aux_sym_comment_repeat1,
    ACTIONS(187), 4,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      aux_sym_comment_token4,
    ACTIONS(144), 17,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [599] = 5,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
    ACTIONS(195), 1,
      sym_doc_ref,
    STATE(13), 1,
      aux_sym_comment_repeat1,
    ACTIONS(193), 4,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      aux_sym_comment_token4,
    ACTIONS(138), 17,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [634] = 5,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
    ACTIONS(202), 1,
      sym_doc_ref,
    STATE(15), 1,
      aux_sym_comment_repeat1,
    ACTIONS(199), 4,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      aux_sym_comment_token4,
    ACTIONS(150), 17,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [669] = 9,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      aux_sym_number_token1,
    ACTIONS(160), 1,
      sym_identifier,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
    ACTIONS(130), 2,
      aux_sym_number_token2,
      aux_sym_number_token3,
    ACTIONS(132), 2,
      anon_sym_STAR,
      anon_sym_DASH,
    ACTIONS(134), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(12), 5,
      sym_parenthesized_expression,
      sym_number,
      sym_operator,
      sym_constant,
      aux_sym_value_repeat1,
    ACTIONS(122), 8,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_TILDE,
  [711] = 4,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_attribute_argument_list,
    ACTIONS(207), 5,
      anon_sym_RBRACE,
      sym_tag_number,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(209), 16,
      anon_sym_void,
      anon_sym_static,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [743] = 8,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      aux_sym_number_token1,
    ACTIONS(213), 1,
      sym_identifier,
    ACTIONS(130), 2,
      aux_sym_number_token2,
      aux_sym_number_token3,
    ACTIONS(132), 2,
      anon_sym_STAR,
      anon_sym_DASH,
    ACTIONS(134), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 5,
      sym_parenthesized_expression,
      sym_number,
      sym_operator,
      sym_constant,
      aux_sym_value_repeat1,
    ACTIONS(122), 8,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_TILDE,
  [782] = 7,
    ACTIONS(215), 1,
      anon_sym_RPAREN,
    ACTIONS(217), 1,
      anon_sym_AT,
    STATE(20), 1,
      aux_sym_argument_list_repeat1,
    STATE(159), 1,
      sym_type,
    STATE(241), 1,
      sym_variable,
    STATE(36), 2,
      sym_attribute,
      aux_sym_typedef_definition_repeat1,
    ACTIONS(86), 15,
      anon_sym_void,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [819] = 7,
    ACTIONS(217), 1,
      anon_sym_AT,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      aux_sym_argument_list_repeat1,
    STATE(159), 1,
      sym_type,
    STATE(247), 1,
      sym_variable,
    STATE(33), 2,
      sym_attribute,
      aux_sym_typedef_definition_repeat1,
    ACTIONS(86), 15,
      anon_sym_void,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [856] = 7,
    ACTIONS(224), 1,
      anon_sym_RPAREN,
    ACTIONS(226), 1,
      anon_sym_AT,
    STATE(21), 1,
      aux_sym_argument_list_repeat1,
    STATE(159), 1,
      sym_type,
    STATE(269), 1,
      sym_variable,
    STATE(37), 2,
      sym_attribute,
      aux_sym_typedef_definition_repeat1,
    ACTIONS(221), 15,
      anon_sym_void,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [893] = 2,
    ACTIONS(229), 5,
      anon_sym_RBRACE,
      sym_tag_number,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(231), 16,
      anon_sym_void,
      anon_sym_static,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [919] = 2,
    ACTIONS(233), 5,
      anon_sym_RBRACE,
      sym_tag_number,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(235), 16,
      anon_sym_void,
      anon_sym_static,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [945] = 2,
    ACTIONS(237), 5,
      anon_sym_RBRACE,
      sym_tag_number,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(239), 16,
      anon_sym_void,
      anon_sym_static,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [971] = 2,
    ACTIONS(241), 5,
      anon_sym_RBRACE,
      sym_tag_number,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(243), 16,
      anon_sym_void,
      anon_sym_static,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [997] = 2,
    ACTIONS(245), 5,
      anon_sym_RBRACE,
      sym_tag_number,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(247), 16,
      anon_sym_void,
      anon_sym_static,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [1023] = 2,
    ACTIONS(249), 5,
      anon_sym_RBRACE,
      sym_tag_number,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(251), 16,
      anon_sym_void,
      anon_sym_static,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [1049] = 2,
    ACTIONS(207), 5,
      anon_sym_RBRACE,
      sym_tag_number,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(209), 16,
      anon_sym_void,
      anon_sym_static,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [1075] = 2,
    ACTIONS(185), 5,
      anon_sym_RBRACE,
      sym_tag_number,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(144), 16,
      anon_sym_void,
      anon_sym_static,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [1101] = 2,
    ACTIONS(253), 5,
      anon_sym_RBRACE,
      sym_tag_number,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(255), 16,
      anon_sym_void,
      anon_sym_static,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [1127] = 2,
    ACTIONS(259), 7,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(257), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AMP,
      aux_sym_number_token1,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_TILDE,
  [1152] = 2,
    ACTIONS(263), 7,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(261), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AMP,
      aux_sym_number_token1,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_TILDE,
  [1177] = 5,
    ACTIONS(217), 1,
      anon_sym_AT,
    STATE(159), 1,
      sym_type,
    STATE(251), 1,
      sym_variable,
    STATE(78), 2,
      sym_attribute,
      aux_sym_typedef_definition_repeat1,
    ACTIONS(86), 15,
      anon_sym_void,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [1208] = 2,
    ACTIONS(267), 7,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(265), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AMP,
      aux_sym_number_token1,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_TILDE,
  [1233] = 2,
    ACTIONS(271), 7,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(269), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AMP,
      aux_sym_number_token1,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_TILDE,
  [1258] = 5,
    ACTIONS(217), 1,
      anon_sym_AT,
    STATE(159), 1,
      sym_type,
    STATE(246), 1,
      sym_variable,
    STATE(78), 2,
      sym_attribute,
      aux_sym_typedef_definition_repeat1,
    ACTIONS(86), 15,
      anon_sym_void,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [1289] = 5,
    ACTIONS(217), 1,
      anon_sym_AT,
    STATE(159), 1,
      sym_type,
    STATE(275), 1,
      sym_variable,
    STATE(78), 2,
      sym_attribute,
      aux_sym_typedef_definition_repeat1,
    ACTIONS(86), 15,
      anon_sym_void,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [1320] = 2,
    ACTIONS(275), 1,
      anon_sym_SEMI,
    ACTIONS(273), 18,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1344] = 2,
    ACTIONS(279), 1,
      anon_sym_SEMI,
    ACTIONS(277), 18,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1368] = 2,
    ACTIONS(283), 1,
      anon_sym_SEMI,
    ACTIONS(281), 18,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1392] = 5,
    ACTIONS(88), 1,
      anon_sym_static,
    STATE(95), 1,
      sym_field_qualifier,
    STATE(159), 1,
      sym_type,
    STATE(280), 1,
      sym_variable,
    ACTIONS(86), 15,
      anon_sym_void,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [1422] = 1,
    ACTIONS(285), 19,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1444] = 2,
    ACTIONS(289), 1,
      anon_sym_SEMI,
    ACTIONS(287), 18,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1468] = 2,
    ACTIONS(293), 1,
      anon_sym_SEMI,
    ACTIONS(291), 18,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1492] = 1,
    ACTIONS(295), 19,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1514] = 2,
    ACTIONS(299), 1,
      anon_sym_SEMI,
    ACTIONS(297), 18,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1538] = 1,
    ACTIONS(301), 19,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1560] = 1,
    ACTIONS(303), 19,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1582] = 2,
    ACTIONS(307), 1,
      anon_sym_SEMI,
    ACTIONS(305), 18,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1606] = 2,
    ACTIONS(311), 1,
      anon_sym_SEMI,
    ACTIONS(309), 18,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1630] = 2,
    ACTIONS(315), 1,
      anon_sym_SEMI,
    ACTIONS(313), 18,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1654] = 2,
    ACTIONS(319), 1,
      anon_sym_SEMI,
    ACTIONS(317), 18,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1678] = 2,
    ACTIONS(323), 1,
      anon_sym_SEMI,
    ACTIONS(321), 18,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1702] = 1,
    ACTIONS(325), 18,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1723] = 1,
    ACTIONS(327), 18,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1744] = 1,
    ACTIONS(329), 18,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1765] = 1,
    ACTIONS(331), 18,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1786] = 1,
    ACTIONS(333), 18,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1807] = 1,
    ACTIONS(335), 18,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1828] = 1,
    ACTIONS(337), 18,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1849] = 1,
    ACTIONS(339), 18,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1870] = 1,
    ACTIONS(341), 18,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1891] = 1,
    ACTIONS(343), 18,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1912] = 1,
    ACTIONS(345), 18,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1933] = 1,
    ACTIONS(347), 18,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1954] = 1,
    ACTIONS(349), 18,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1975] = 1,
    ACTIONS(351), 18,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1996] = 1,
    ACTIONS(353), 18,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2017] = 1,
    ACTIONS(309), 18,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2038] = 1,
    ACTIONS(355), 18,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2059] = 1,
    ACTIONS(313), 18,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2080] = 1,
    ACTIONS(357), 18,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2101] = 1,
    ACTIONS(359), 18,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2122] = 1,
    ACTIONS(361), 18,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2143] = 1,
    ACTIONS(363), 18,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2164] = 1,
    ACTIONS(365), 18,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2185] = 1,
    ACTIONS(367), 18,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2206] = 3,
    ACTIONS(371), 1,
      anon_sym_AT,
    STATE(78), 2,
      sym_attribute,
      aux_sym_typedef_definition_repeat1,
    ACTIONS(369), 15,
      anon_sym_void,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [2231] = 1,
    ACTIONS(374), 18,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2252] = 1,
    ACTIONS(291), 18,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2273] = 4,
    ACTIONS(207), 1,
      anon_sym_AT,
    ACTIONS(376), 1,
      anon_sym_LPAREN,
    STATE(97), 1,
      sym_attribute_argument_list,
    ACTIONS(209), 15,
      anon_sym_void,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [2300] = 1,
    ACTIONS(378), 18,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2321] = 1,
    ACTIONS(249), 18,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2342] = 1,
    ACTIONS(305), 18,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2363] = 1,
    ACTIONS(380), 18,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2384] = 14,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(382), 1,
      anon_sym_typedef,
    ACTIONS(384), 1,
      anon_sym_module,
    ACTIONS(386), 1,
      anon_sym_enum,
    ACTIONS(388), 1,
      anon_sym_interface,
    ACTIONS(390), 1,
      anon_sym_class,
    ACTIONS(392), 1,
      anon_sym_snmpObj,
    ACTIONS(394), 1,
      anon_sym_snmpTbl,
    ACTIONS(396), 1,
      anon_sym_snmpIface,
    STATE(289), 1,
      sym_data_structure_type,
    ACTIONS(19), 2,
      anon_sym_abstract,
      anon_sym_local,
    ACTIONS(21), 2,
      anon_sym_union,
      anon_sym_struct,
    STATE(102), 2,
      sym_attribute,
      aux_sym_typedef_definition_repeat1,
    STATE(171), 2,
      sym_class_modifier,
      aux_sym_class_definition_repeat1,
  [2431] = 1,
    ACTIONS(398), 18,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2452] = 1,
    ACTIONS(287), 18,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2473] = 1,
    ACTIONS(321), 18,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2494] = 1,
    ACTIONS(185), 18,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2515] = 2,
    ACTIONS(402), 2,
      anon_sym_RPAREN,
      anon_sym_AT,
    ACTIONS(400), 15,
      anon_sym_void,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [2537] = 2,
    ACTIONS(224), 2,
      anon_sym_RPAREN,
      anon_sym_AT,
    ACTIONS(404), 15,
      anon_sym_void,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [2559] = 3,
    STATE(159), 1,
      sym_type,
    STATE(282), 1,
      sym_variable,
    ACTIONS(86), 15,
      anon_sym_void,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [2583] = 3,
    STATE(159), 1,
      sym_type,
    STATE(280), 1,
      sym_variable,
    ACTIONS(86), 15,
      anon_sym_void,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [2607] = 3,
    STATE(159), 1,
      sym_type,
    STATE(276), 1,
      sym_variable,
    ACTIONS(86), 15,
      anon_sym_void,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [2631] = 3,
    STATE(159), 1,
      sym_type,
    STATE(302), 1,
      sym_variable,
    ACTIONS(86), 15,
      anon_sym_void,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [2655] = 2,
    ACTIONS(229), 1,
      anon_sym_AT,
    ACTIONS(231), 15,
      anon_sym_void,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [2676] = 2,
    ACTIONS(245), 1,
      anon_sym_AT,
    ACTIONS(247), 15,
      anon_sym_void,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [2697] = 1,
    ACTIONS(406), 16,
      anon_sym_void,
      anon_sym_static,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [2716] = 2,
    ACTIONS(207), 1,
      anon_sym_AT,
    ACTIONS(209), 15,
      anon_sym_void,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [2737] = 2,
    ACTIONS(253), 1,
      anon_sym_AT,
    ACTIONS(255), 15,
      anon_sym_void,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [2758] = 3,
    ACTIONS(410), 1,
      anon_sym_AT,
    STATE(102), 2,
      sym_attribute,
      aux_sym_typedef_definition_repeat1,
    ACTIONS(408), 12,
      anon_sym_typedef,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
  [2780] = 3,
    ACTIONS(413), 1,
      anon_sym_LPAREN,
    STATE(107), 1,
      sym_attribute_argument_list,
    ACTIONS(207), 13,
      anon_sym_typedef,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [2802] = 1,
    ACTIONS(415), 15,
      anon_sym_void,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [2820] = 1,
    ACTIONS(245), 13,
      anon_sym_typedef,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [2836] = 1,
    ACTIONS(253), 13,
      anon_sym_typedef,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [2852] = 1,
    ACTIONS(229), 13,
      anon_sym_typedef,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [2868] = 1,
    ACTIONS(207), 13,
      anon_sym_typedef,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [2884] = 4,
    ACTIONS(419), 1,
      sym_doc_ref,
    STATE(116), 1,
      aux_sym_comment_repeat1,
    ACTIONS(417), 4,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      aux_sym_comment_token4,
    ACTIONS(144), 6,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2905] = 9,
    ACTIONS(421), 1,
      anon_sym_RBRACE,
    ACTIONS(423), 1,
      sym_tag_number,
    ACTIONS(425), 1,
      sym_identifier,
    ACTIONS(427), 1,
      anon_sym_AT,
    ACTIONS(429), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(431), 1,
      anon_sym_SLASH_STAR,
    STATE(266), 1,
      sym_tag,
    STATE(149), 2,
      sym_attribute,
      aux_sym_typedef_definition_repeat1,
    STATE(115), 3,
      sym_rpc,
      sym_comment,
      aux_sym_rpc_block_repeat1,
  [2936] = 10,
    ACTIONS(423), 1,
      sym_tag_number,
    ACTIONS(427), 1,
      anon_sym_AT,
    ACTIONS(429), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(431), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(433), 1,
      anon_sym_RBRACE,
    ACTIONS(435), 1,
      sym_identifier,
    STATE(267), 1,
      sym_tag,
    STATE(268), 1,
      sym_enum_field,
    STATE(118), 2,
      sym_comment,
      aux_sym_enum_block_repeat1,
    STATE(152), 2,
      sym_attribute,
      aux_sym_typedef_definition_repeat1,
  [2969] = 9,
    ACTIONS(437), 1,
      anon_sym_RBRACE,
    ACTIONS(439), 1,
      sym_tag_number,
    ACTIONS(442), 1,
      sym_identifier,
    ACTIONS(445), 1,
      anon_sym_AT,
    ACTIONS(448), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(451), 1,
      anon_sym_SLASH_STAR,
    STATE(266), 1,
      sym_tag,
    STATE(149), 2,
      sym_attribute,
      aux_sym_typedef_definition_repeat1,
    STATE(112), 3,
      sym_rpc,
      sym_comment,
      aux_sym_rpc_block_repeat1,
  [3000] = 4,
    ACTIONS(456), 1,
      sym_doc_ref,
    STATE(109), 1,
      aux_sym_comment_repeat1,
    ACTIONS(454), 4,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      aux_sym_comment_token4,
    ACTIONS(138), 6,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3021] = 9,
    ACTIONS(423), 1,
      sym_tag_number,
    ACTIONS(427), 1,
      anon_sym_AT,
    ACTIONS(429), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(431), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(458), 1,
      anon_sym_RBRACE,
    ACTIONS(460), 1,
      sym_identifier,
    STATE(284), 1,
      sym_tag,
    STATE(141), 2,
      sym_attribute,
      aux_sym_typedef_definition_repeat1,
    STATE(119), 3,
      sym_snmp_rpc,
      sym_comment,
      aux_sym_snmp_rpc_block_repeat1,
  [3052] = 9,
    ACTIONS(423), 1,
      sym_tag_number,
    ACTIONS(425), 1,
      sym_identifier,
    ACTIONS(427), 1,
      anon_sym_AT,
    ACTIONS(429), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(431), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(462), 1,
      anon_sym_RBRACE,
    STATE(266), 1,
      sym_tag,
    STATE(149), 2,
      sym_attribute,
      aux_sym_typedef_definition_repeat1,
    STATE(112), 3,
      sym_rpc,
      sym_comment,
      aux_sym_rpc_block_repeat1,
  [3083] = 4,
    ACTIONS(467), 1,
      sym_doc_ref,
    STATE(116), 1,
      aux_sym_comment_repeat1,
    ACTIONS(464), 4,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      aux_sym_comment_token4,
    ACTIONS(150), 6,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3104] = 10,
    ACTIONS(423), 1,
      sym_tag_number,
    ACTIONS(427), 1,
      anon_sym_AT,
    ACTIONS(429), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(431), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(435), 1,
      sym_identifier,
    ACTIONS(470), 1,
      anon_sym_RBRACE,
    STATE(267), 1,
      sym_tag,
    STATE(268), 1,
      sym_enum_field,
    STATE(111), 2,
      sym_comment,
      aux_sym_enum_block_repeat1,
    STATE(152), 2,
      sym_attribute,
      aux_sym_typedef_definition_repeat1,
  [3137] = 10,
    ACTIONS(472), 1,
      anon_sym_RBRACE,
    ACTIONS(474), 1,
      sym_tag_number,
    ACTIONS(477), 1,
      sym_identifier,
    ACTIONS(480), 1,
      anon_sym_AT,
    ACTIONS(483), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(486), 1,
      anon_sym_SLASH_STAR,
    STATE(267), 1,
      sym_tag,
    STATE(268), 1,
      sym_enum_field,
    STATE(118), 2,
      sym_comment,
      aux_sym_enum_block_repeat1,
    STATE(152), 2,
      sym_attribute,
      aux_sym_typedef_definition_repeat1,
  [3170] = 9,
    ACTIONS(489), 1,
      anon_sym_RBRACE,
    ACTIONS(491), 1,
      sym_tag_number,
    ACTIONS(494), 1,
      sym_identifier,
    ACTIONS(497), 1,
      anon_sym_AT,
    ACTIONS(500), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(503), 1,
      anon_sym_SLASH_STAR,
    STATE(284), 1,
      sym_tag,
    STATE(141), 2,
      sym_attribute,
      aux_sym_typedef_definition_repeat1,
    STATE(119), 3,
      sym_snmp_rpc,
      sym_comment,
      aux_sym_snmp_rpc_block_repeat1,
  [3201] = 9,
    ACTIONS(423), 1,
      sym_tag_number,
    ACTIONS(427), 1,
      anon_sym_AT,
    ACTIONS(429), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(431), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(460), 1,
      sym_identifier,
    ACTIONS(506), 1,
      anon_sym_RBRACE,
    STATE(284), 1,
      sym_tag,
    STATE(141), 2,
      sym_attribute,
      aux_sym_typedef_definition_repeat1,
    STATE(114), 3,
      sym_snmp_rpc,
      sym_comment,
      aux_sym_snmp_rpc_block_repeat1,
  [3232] = 4,
    ACTIONS(510), 1,
      sym_doc_ref,
    STATE(123), 1,
      aux_sym_comment_repeat1,
    ACTIONS(508), 4,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      aux_sym_comment_token4,
    ACTIONS(144), 5,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3252] = 4,
    ACTIONS(514), 1,
      sym_doc_ref,
    STATE(121), 1,
      aux_sym_comment_repeat1,
    ACTIONS(512), 4,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      aux_sym_comment_token4,
    ACTIONS(138), 5,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3272] = 4,
    ACTIONS(519), 1,
      sym_doc_ref,
    STATE(123), 1,
      aux_sym_comment_repeat1,
    ACTIONS(516), 4,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      aux_sym_comment_token4,
    ACTIONS(150), 5,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3292] = 4,
    ACTIONS(528), 1,
      anon_sym_STAR_SLASH,
    STATE(124), 1,
      aux_sym_comment_repeat2,
    ACTIONS(522), 4,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      aux_sym_comment_token4,
      aux_sym_comment_token8,
    ACTIONS(525), 4,
      aux_sym_comment_token5,
      aux_sym_comment_token6,
      aux_sym_comment_token7,
      sym_doc_ref,
  [3311] = 4,
    ACTIONS(534), 1,
      anon_sym_STAR_SLASH,
    STATE(130), 1,
      aux_sym_comment_repeat2,
    ACTIONS(530), 4,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      aux_sym_comment_token4,
      aux_sym_comment_token8,
    ACTIONS(532), 4,
      aux_sym_comment_token5,
      aux_sym_comment_token6,
      aux_sym_comment_token7,
      sym_doc_ref,
  [3330] = 4,
    ACTIONS(540), 1,
      anon_sym_STAR_SLASH,
    STATE(127), 1,
      aux_sym_comment_repeat2,
    ACTIONS(536), 4,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      aux_sym_comment_token4,
      aux_sym_comment_token8,
    ACTIONS(538), 4,
      aux_sym_comment_token5,
      aux_sym_comment_token6,
      aux_sym_comment_token7,
      sym_doc_ref,
  [3349] = 4,
    ACTIONS(546), 1,
      anon_sym_STAR_SLASH,
    STATE(124), 1,
      aux_sym_comment_repeat2,
    ACTIONS(542), 4,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      aux_sym_comment_token4,
      aux_sym_comment_token8,
    ACTIONS(544), 4,
      aux_sym_comment_token5,
      aux_sym_comment_token6,
      aux_sym_comment_token7,
      sym_doc_ref,
  [3368] = 4,
    ACTIONS(548), 1,
      anon_sym_STAR_SLASH,
    STATE(124), 1,
      aux_sym_comment_repeat2,
    ACTIONS(542), 4,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      aux_sym_comment_token4,
      aux_sym_comment_token8,
    ACTIONS(544), 4,
      aux_sym_comment_token5,
      aux_sym_comment_token6,
      aux_sym_comment_token7,
      sym_doc_ref,
  [3387] = 4,
    ACTIONS(554), 1,
      anon_sym_STAR_SLASH,
    STATE(128), 1,
      aux_sym_comment_repeat2,
    ACTIONS(550), 4,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      aux_sym_comment_token4,
      aux_sym_comment_token8,
    ACTIONS(552), 4,
      aux_sym_comment_token5,
      aux_sym_comment_token6,
      aux_sym_comment_token7,
      sym_doc_ref,
  [3406] = 4,
    ACTIONS(556), 1,
      anon_sym_STAR_SLASH,
    STATE(124), 1,
      aux_sym_comment_repeat2,
    ACTIONS(542), 4,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      aux_sym_comment_token4,
      aux_sym_comment_token8,
    ACTIONS(544), 4,
      aux_sym_comment_token5,
      aux_sym_comment_token6,
      aux_sym_comment_token7,
      sym_doc_ref,
  [3425] = 7,
    ACTIONS(423), 1,
      sym_tag_number,
    ACTIONS(431), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(558), 1,
      anon_sym_RBRACE,
    ACTIONS(560), 1,
      sym_identifier,
    ACTIONS(562), 1,
      anon_sym_SLASH_SLASH,
    STATE(270), 1,
      sym_tag,
    STATE(133), 3,
      sym_module_field,
      sym_comment,
      aux_sym_module_block_repeat1,
  [3449] = 7,
    ACTIONS(423), 1,
      sym_tag_number,
    ACTIONS(431), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(560), 1,
      sym_identifier,
    ACTIONS(562), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(564), 1,
      anon_sym_RBRACE,
    STATE(270), 1,
      sym_tag,
    STATE(131), 3,
      sym_module_field,
      sym_comment,
      aux_sym_module_block_repeat1,
  [3473] = 7,
    ACTIONS(566), 1,
      anon_sym_RBRACE,
    ACTIONS(568), 1,
      sym_tag_number,
    ACTIONS(571), 1,
      sym_identifier,
    ACTIONS(574), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(577), 1,
      anon_sym_SLASH_STAR,
    STATE(270), 1,
      sym_tag,
    STATE(133), 3,
      sym_module_field,
      sym_comment,
      aux_sym_module_block_repeat1,
  [3497] = 7,
    ACTIONS(580), 1,
      anon_sym_SEMI,
    ACTIONS(582), 1,
      anon_sym_in,
    ACTIONS(584), 1,
      anon_sym_out,
    ACTIONS(586), 1,
      anon_sym_throw,
    STATE(178), 1,
      sym_rpc_in,
    STATE(199), 1,
      sym_rpc_out,
    STATE(277), 1,
      sym_rpc_throw,
  [3519] = 7,
    ACTIONS(582), 1,
      anon_sym_in,
    ACTIONS(584), 1,
      anon_sym_out,
    ACTIONS(586), 1,
      anon_sym_throw,
    ACTIONS(588), 1,
      anon_sym_SEMI,
    STATE(165), 1,
      sym_rpc_in,
    STATE(207), 1,
      sym_rpc_out,
    STATE(255), 1,
      sym_rpc_throw,
  [3541] = 7,
    ACTIONS(582), 1,
      anon_sym_in,
    ACTIONS(584), 1,
      anon_sym_out,
    ACTIONS(586), 1,
      anon_sym_throw,
    ACTIONS(590), 1,
      anon_sym_SEMI,
    STATE(161), 1,
      sym_rpc_in,
    STATE(212), 1,
      sym_rpc_out,
    STATE(298), 1,
      sym_rpc_throw,
  [3563] = 1,
    ACTIONS(472), 6,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3572] = 1,
    ACTIONS(592), 6,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3581] = 1,
    ACTIONS(594), 6,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3590] = 1,
    ACTIONS(596), 6,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3599] = 5,
    ACTIONS(423), 1,
      sym_tag_number,
    ACTIONS(427), 1,
      anon_sym_AT,
    ACTIONS(598), 1,
      sym_identifier,
    STATE(259), 1,
      sym_tag,
    STATE(160), 2,
      sym_attribute,
      aux_sym_typedef_definition_repeat1,
  [3616] = 1,
    ACTIONS(249), 6,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3625] = 1,
    ACTIONS(600), 6,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3634] = 1,
    ACTIONS(185), 6,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3643] = 1,
    ACTIONS(602), 6,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3652] = 1,
    ACTIONS(604), 6,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3661] = 1,
    ACTIONS(606), 6,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3670] = 1,
    ACTIONS(608), 6,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3679] = 5,
    ACTIONS(423), 1,
      sym_tag_number,
    ACTIONS(427), 1,
      anon_sym_AT,
    ACTIONS(610), 1,
      sym_identifier,
    STATE(279), 1,
      sym_tag,
    STATE(160), 2,
      sym_attribute,
      aux_sym_typedef_definition_repeat1,
  [3696] = 1,
    ACTIONS(612), 6,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3705] = 1,
    ACTIONS(614), 6,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3714] = 5,
    ACTIONS(423), 1,
      sym_tag_number,
    ACTIONS(427), 1,
      anon_sym_AT,
    ACTIONS(616), 1,
      sym_identifier,
    STATE(288), 1,
      sym_tag,
    STATE(160), 2,
      sym_attribute,
      aux_sym_typedef_definition_repeat1,
  [3731] = 4,
    ACTIONS(618), 1,
      anon_sym_COLON,
    ACTIONS(620), 1,
      anon_sym_LBRACE,
    STATE(77), 1,
      sym_snmp_rpc_block,
    STATE(158), 2,
      sym_class_inheritance,
      aux_sym_class_definition_repeat2,
  [3745] = 3,
    ACTIONS(622), 1,
      anon_sym_LPAREN,
    STATE(195), 1,
      sym_attribute_argument_list,
    ACTIONS(207), 3,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
  [3757] = 4,
    ACTIONS(618), 1,
      anon_sym_COLON,
    ACTIONS(624), 1,
      anon_sym_LBRACE,
    STATE(67), 1,
      sym_data_structure_block,
    STATE(189), 2,
      sym_class_inheritance,
      aux_sym_class_definition_repeat2,
  [3771] = 4,
    ACTIONS(618), 1,
      anon_sym_COLON,
    ACTIONS(624), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_data_structure_block,
    STATE(169), 2,
      sym_class_inheritance,
      aux_sym_class_definition_repeat2,
  [3785] = 3,
    ACTIONS(390), 1,
      anon_sym_class,
    ACTIONS(19), 2,
      anon_sym_abstract,
      anon_sym_local,
    STATE(177), 2,
      sym_class_modifier,
      aux_sym_class_definition_repeat1,
  [3797] = 4,
    ACTIONS(618), 1,
      anon_sym_COLON,
    ACTIONS(620), 1,
      anon_sym_LBRACE,
    STATE(65), 1,
      sym_snmp_rpc_block,
    STATE(189), 2,
      sym_class_inheritance,
      aux_sym_class_definition_repeat2,
  [3811] = 3,
    ACTIONS(628), 1,
      sym_identifier,
    STATE(287), 1,
      sym_type_specifier,
    ACTIONS(626), 3,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_LBRACK_RBRACK,
  [3823] = 3,
    ACTIONS(630), 1,
      anon_sym_AT,
    ACTIONS(408), 2,
      sym_tag_number,
      sym_identifier,
    STATE(160), 2,
      sym_attribute,
      aux_sym_typedef_definition_repeat1,
  [3835] = 5,
    ACTIONS(584), 1,
      anon_sym_out,
    ACTIONS(586), 1,
      anon_sym_throw,
    ACTIONS(588), 1,
      anon_sym_SEMI,
    STATE(207), 1,
      sym_rpc_out,
    STATE(255), 1,
      sym_rpc_throw,
  [3851] = 4,
    ACTIONS(618), 1,
      anon_sym_COLON,
    ACTIONS(624), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_data_structure_block,
    STATE(189), 2,
      sym_class_inheritance,
      aux_sym_class_definition_repeat2,
  [3865] = 4,
    ACTIONS(618), 1,
      anon_sym_COLON,
    ACTIONS(624), 1,
      anon_sym_LBRACE,
    STATE(70), 1,
      sym_data_structure_block,
    STATE(185), 2,
      sym_class_inheritance,
      aux_sym_class_definition_repeat2,
  [3879] = 1,
    ACTIONS(633), 5,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3887] = 5,
    ACTIONS(584), 1,
      anon_sym_out,
    ACTIONS(586), 1,
      anon_sym_throw,
    ACTIONS(635), 1,
      anon_sym_SEMI,
    STATE(191), 1,
      sym_rpc_out,
    STATE(264), 1,
      sym_rpc_throw,
  [3903] = 4,
    ACTIONS(618), 1,
      anon_sym_COLON,
    ACTIONS(624), 1,
      anon_sym_LBRACE,
    STATE(72), 1,
      sym_data_structure_block,
    STATE(172), 2,
      sym_class_inheritance,
      aux_sym_class_definition_repeat2,
  [3917] = 4,
    ACTIONS(618), 1,
      anon_sym_COLON,
    ACTIONS(624), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym_data_structure_block,
    STATE(155), 2,
      sym_class_inheritance,
      aux_sym_class_definition_repeat2,
  [3931] = 3,
    ACTIONS(639), 1,
      anon_sym_EQ,
    STATE(214), 1,
      sym_default_value,
    ACTIONS(637), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3943] = 4,
    ACTIONS(618), 1,
      anon_sym_COLON,
    ACTIONS(624), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_data_structure_block,
    STATE(189), 2,
      sym_class_inheritance,
      aux_sym_class_definition_repeat2,
  [3957] = 4,
    ACTIONS(618), 1,
      anon_sym_COLON,
    ACTIONS(620), 1,
      anon_sym_LBRACE,
    STATE(75), 1,
      sym_snmp_rpc_block,
    STATE(189), 2,
      sym_class_inheritance,
      aux_sym_class_definition_repeat2,
  [3971] = 3,
    ACTIONS(641), 1,
      anon_sym_class,
    ACTIONS(19), 2,
      anon_sym_abstract,
      anon_sym_local,
    STATE(177), 2,
      sym_class_modifier,
      aux_sym_class_definition_repeat1,
  [3983] = 4,
    ACTIONS(618), 1,
      anon_sym_COLON,
    ACTIONS(624), 1,
      anon_sym_LBRACE,
    STATE(68), 1,
      sym_data_structure_block,
    STATE(189), 2,
      sym_class_inheritance,
      aux_sym_class_definition_repeat2,
  [3997] = 4,
    ACTIONS(618), 1,
      anon_sym_COLON,
    ACTIONS(620), 1,
      anon_sym_LBRACE,
    STATE(65), 1,
      sym_snmp_rpc_block,
    STATE(170), 2,
      sym_class_inheritance,
      aux_sym_class_definition_repeat2,
  [4011] = 4,
    ACTIONS(618), 1,
      anon_sym_COLON,
    ACTIONS(624), 1,
      anon_sym_LBRACE,
    STATE(67), 1,
      sym_data_structure_block,
    STATE(183), 2,
      sym_class_inheritance,
      aux_sym_class_definition_repeat2,
  [4025] = 3,
    ACTIONS(645), 1,
      anon_sym_LPAREN,
    STATE(209), 1,
      sym_argument_list,
    ACTIONS(643), 3,
      anon_sym_null,
      anon_sym_void,
      sym_identifier,
  [4037] = 3,
    ACTIONS(645), 1,
      anon_sym_LPAREN,
    STATE(229), 1,
      sym_argument_list,
    ACTIONS(647), 3,
      anon_sym_null,
      anon_sym_void,
      sym_identifier,
  [4049] = 3,
    ACTIONS(649), 1,
      anon_sym_class,
    ACTIONS(651), 2,
      anon_sym_abstract,
      anon_sym_local,
    STATE(177), 2,
      sym_class_modifier,
      aux_sym_class_definition_repeat1,
  [4061] = 5,
    ACTIONS(584), 1,
      anon_sym_out,
    ACTIONS(586), 1,
      anon_sym_throw,
    ACTIONS(590), 1,
      anon_sym_SEMI,
    STATE(212), 1,
      sym_rpc_out,
    STATE(298), 1,
      sym_rpc_throw,
  [4077] = 3,
    ACTIONS(639), 1,
      anon_sym_EQ,
    STATE(202), 1,
      sym_default_value,
    ACTIONS(654), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4089] = 4,
    ACTIONS(618), 1,
      anon_sym_COLON,
    ACTIONS(624), 1,
      anon_sym_LBRACE,
    STATE(68), 1,
      sym_data_structure_block,
    STATE(182), 2,
      sym_class_inheritance,
      aux_sym_class_definition_repeat2,
  [4103] = 4,
    ACTIONS(618), 1,
      anon_sym_COLON,
    ACTIONS(624), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym_data_structure_block,
    STATE(162), 2,
      sym_class_inheritance,
      aux_sym_class_definition_repeat2,
  [4117] = 4,
    ACTIONS(618), 1,
      anon_sym_COLON,
    ACTIONS(624), 1,
      anon_sym_LBRACE,
    STATE(58), 1,
      sym_data_structure_block,
    STATE(189), 2,
      sym_class_inheritance,
      aux_sym_class_definition_repeat2,
  [4131] = 4,
    ACTIONS(618), 1,
      anon_sym_COLON,
    ACTIONS(624), 1,
      anon_sym_LBRACE,
    STATE(85), 1,
      sym_data_structure_block,
    STATE(189), 2,
      sym_class_inheritance,
      aux_sym_class_definition_repeat2,
  [4145] = 1,
    ACTIONS(656), 5,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4153] = 4,
    ACTIONS(618), 1,
      anon_sym_COLON,
    ACTIONS(624), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym_data_structure_block,
    STATE(189), 2,
      sym_class_inheritance,
      aux_sym_class_definition_repeat2,
  [4167] = 4,
    ACTIONS(658), 1,
      anon_sym_COLON,
    ACTIONS(660), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym_module_block,
    STATE(248), 1,
      sym_module_inheritance,
  [4180] = 4,
    ACTIONS(658), 1,
      anon_sym_COLON,
    ACTIONS(660), 1,
      anon_sym_LBRACE,
    STATE(52), 1,
      sym_module_block,
    STATE(236), 1,
      sym_module_inheritance,
  [4193] = 1,
    ACTIONS(662), 4,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_LBRACK_RBRACK,
      sym_identifier,
  [4200] = 3,
    ACTIONS(664), 1,
      anon_sym_COLON,
    ACTIONS(667), 1,
      anon_sym_LBRACE,
    STATE(189), 2,
      sym_class_inheritance,
      aux_sym_class_definition_repeat2,
  [4211] = 3,
    ACTIONS(639), 1,
      anon_sym_EQ,
    ACTIONS(669), 1,
      anon_sym_COMMA,
    STATE(286), 1,
      sym_default_value,
  [4221] = 3,
    ACTIONS(586), 1,
      anon_sym_throw,
    ACTIONS(671), 1,
      anon_sym_SEMI,
    STATE(272), 1,
      sym_rpc_throw,
  [4231] = 1,
    ACTIONS(673), 3,
      anon_sym_SEMI,
      anon_sym_out,
      anon_sym_throw,
  [4237] = 3,
    ACTIONS(675), 1,
      anon_sym_SEMI,
    ACTIONS(677), 1,
      anon_sym_in,
    STATE(310), 1,
      sym_snmp_rpc_in,
  [4247] = 1,
    ACTIONS(253), 3,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
  [4253] = 1,
    ACTIONS(229), 3,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
  [4259] = 1,
    ACTIONS(207), 3,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
  [4265] = 1,
    ACTIONS(679), 3,
      anon_sym_SEMI,
      anon_sym_out,
      anon_sym_throw,
  [4271] = 1,
    ACTIONS(245), 3,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
  [4277] = 3,
    ACTIONS(586), 1,
      anon_sym_throw,
    ACTIONS(590), 1,
      anon_sym_SEMI,
    STATE(298), 1,
      sym_rpc_throw,
  [4287] = 3,
    ACTIONS(645), 1,
      anon_sym_LPAREN,
    ACTIONS(681), 1,
      sym_identifier,
    STATE(316), 1,
      sym_argument_list,
  [4297] = 3,
    ACTIONS(677), 1,
      anon_sym_in,
    ACTIONS(683), 1,
      anon_sym_SEMI,
    STATE(320), 1,
      sym_snmp_rpc_in,
  [4307] = 1,
    ACTIONS(637), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4313] = 1,
    ACTIONS(685), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4319] = 1,
    ACTIONS(687), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4325] = 1,
    ACTIONS(689), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4331] = 1,
    ACTIONS(691), 3,
      anon_sym_SEMI,
      anon_sym_out,
      anon_sym_throw,
  [4337] = 3,
    ACTIONS(586), 1,
      anon_sym_throw,
    ACTIONS(635), 1,
      anon_sym_SEMI,
    STATE(264), 1,
      sym_rpc_throw,
  [4347] = 3,
    ACTIONS(639), 1,
      anon_sym_EQ,
    ACTIONS(693), 1,
      anon_sym_COMMA,
    STATE(281), 1,
      sym_default_value,
  [4357] = 1,
    ACTIONS(695), 3,
      anon_sym_SEMI,
      anon_sym_out,
      anon_sym_throw,
  [4363] = 3,
    ACTIONS(697), 1,
      anon_sym_RPAREN,
    ACTIONS(699), 1,
      sym_identifier,
    STATE(210), 1,
      aux_sym_module_inheritance_repeat1,
  [4373] = 1,
    ACTIONS(702), 3,
      anon_sym_SEMI,
      anon_sym_out,
      anon_sym_throw,
  [4379] = 3,
    ACTIONS(586), 1,
      anon_sym_throw,
    ACTIONS(588), 1,
      anon_sym_SEMI,
    STATE(255), 1,
      sym_rpc_throw,
  [4389] = 3,
    ACTIONS(704), 1,
      anon_sym_RPAREN,
    ACTIONS(706), 1,
      sym_identifier,
    STATE(210), 1,
      aux_sym_module_inheritance_repeat1,
  [4399] = 1,
    ACTIONS(708), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4405] = 3,
    ACTIONS(639), 1,
      anon_sym_EQ,
    ACTIONS(710), 1,
      anon_sym_COMMA,
    STATE(256), 1,
      sym_default_value,
  [4415] = 1,
    ACTIONS(158), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4421] = 1,
    ACTIONS(712), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4427] = 3,
    ACTIONS(714), 1,
      anon_sym_RPAREN,
    ACTIONS(716), 1,
      sym_identifier,
    STATE(213), 1,
      aux_sym_module_inheritance_repeat1,
  [4437] = 3,
    ACTIONS(376), 1,
      anon_sym_LPAREN,
    ACTIONS(718), 1,
      sym_identifier,
    STATE(100), 1,
      sym_attribute_argument_list,
  [4447] = 3,
    ACTIONS(677), 1,
      anon_sym_in,
    ACTIONS(720), 1,
      anon_sym_SEMI,
    STATE(261), 1,
      sym_snmp_rpc_in,
  [4457] = 3,
    ACTIONS(413), 1,
      anon_sym_LPAREN,
    ACTIONS(722), 1,
      sym_identifier,
    STATE(108), 1,
      sym_attribute_argument_list,
  [4467] = 3,
    ACTIONS(622), 1,
      anon_sym_LPAREN,
    ACTIONS(724), 1,
      sym_identifier,
    STATE(196), 1,
      sym_attribute_argument_list,
  [4477] = 1,
    ACTIONS(726), 3,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
  [4483] = 3,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    ACTIONS(728), 1,
      sym_identifier,
    STATE(28), 1,
      sym_attribute_argument_list,
  [4493] = 2,
    ACTIONS(730), 1,
      anon_sym_COMMA,
    ACTIONS(732), 1,
      anon_sym_LBRACE,
  [4500] = 2,
    ACTIONS(730), 1,
      anon_sym_COMMA,
    ACTIONS(734), 1,
      anon_sym_RPAREN,
  [4507] = 2,
    ACTIONS(736), 1,
      anon_sym_RPAREN,
    ACTIONS(738), 1,
      sym_attribute_content,
  [4514] = 2,
    ACTIONS(740), 1,
      anon_sym_RPAREN,
    ACTIONS(742), 1,
      sym_attribute_content,
  [4521] = 1,
    ACTIONS(744), 2,
      anon_sym_SEMI,
      anon_sym_throw,
  [4526] = 2,
    ACTIONS(746), 1,
      anon_sym_RPAREN,
    ACTIONS(748), 1,
      sym_attribute_content,
  [4533] = 2,
    ACTIONS(750), 1,
      anon_sym_LBRACE,
    STATE(40), 1,
      sym_enum_block,
  [4540] = 2,
    ACTIONS(752), 1,
      anon_sym_LBRACE,
    STATE(54), 1,
      sym_rpc_block,
  [4547] = 2,
    ACTIONS(754), 1,
      anon_sym_RPAREN,
    ACTIONS(756), 1,
      sym_attribute_content,
  [4554] = 2,
    ACTIONS(624), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym_data_structure_block,
  [4561] = 2,
    ACTIONS(758), 1,
      sym_identifier,
    STATE(243), 1,
      aux_sym_module_inheritance_repeat1,
  [4568] = 2,
    ACTIONS(660), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym_module_block,
  [4575] = 1,
    ACTIONS(760), 2,
      sym_tag_number,
      sym_identifier,
  [4580] = 2,
    ACTIONS(750), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym_enum_block,
  [4587] = 2,
    ACTIONS(752), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      sym_rpc_block,
  [4594] = 2,
    ACTIONS(624), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym_data_structure_block,
  [4601] = 2,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
    ACTIONS(762), 1,
      anon_sym_COMMA,
  [4608] = 2,
    ACTIONS(730), 1,
      anon_sym_COMMA,
    ACTIONS(764), 1,
      anon_sym_LBRACE,
  [4615] = 2,
    ACTIONS(766), 1,
      sym_identifier,
    STATE(210), 1,
      aux_sym_module_inheritance_repeat1,
  [4622] = 2,
    ACTIONS(124), 1,
      anon_sym_DQUOTE,
    STATE(205), 1,
      sym_string,
  [4629] = 2,
    ACTIONS(768), 1,
      anon_sym_DQUOTE,
    ACTIONS(770), 1,
      sym_string_content,
  [4636] = 2,
    ACTIONS(772), 1,
      anon_sym_COMMA,
    ACTIONS(774), 1,
      anon_sym_RPAREN,
  [4643] = 2,
    ACTIONS(762), 1,
      anon_sym_COMMA,
    ACTIONS(774), 1,
      anon_sym_RPAREN,
  [4650] = 2,
    ACTIONS(660), 1,
      anon_sym_LBRACE,
    STATE(51), 1,
      sym_module_block,
  [4657] = 1,
    ACTIONS(776), 2,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [4662] = 2,
    ACTIONS(704), 1,
      anon_sym_RPAREN,
    ACTIONS(730), 1,
      anon_sym_COMMA,
  [4669] = 2,
    ACTIONS(772), 1,
      anon_sym_COMMA,
    ACTIONS(778), 1,
      anon_sym_RPAREN,
  [4676] = 1,
    ACTIONS(697), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [4681] = 1,
    ACTIONS(780), 1,
      anon_sym_SEMI,
  [4685] = 1,
    ACTIONS(782), 1,
      sym_identifier,
  [4689] = 1,
    ACTIONS(635), 1,
      anon_sym_SEMI,
  [4693] = 1,
    ACTIONS(669), 1,
      anon_sym_COMMA,
  [4697] = 1,
    ACTIONS(784), 1,
      sym_identifier,
  [4701] = 1,
    ACTIONS(786), 1,
      anon_sym_SEMI,
  [4705] = 1,
    ACTIONS(788), 1,
      sym_identifier,
  [4709] = 1,
    ACTIONS(790), 1,
      sym_identifier,
  [4713] = 1,
    ACTIONS(792), 1,
      anon_sym_SEMI,
  [4717] = 1,
    ACTIONS(794), 1,
      sym_identifier,
  [4721] = 1,
    ACTIONS(796), 1,
      anon_sym_SEMI,
  [4725] = 1,
    ACTIONS(671), 1,
      anon_sym_SEMI,
  [4729] = 1,
    ACTIONS(798), 1,
      anon_sym_SEMI,
  [4733] = 1,
    ACTIONS(610), 1,
      sym_identifier,
  [4737] = 1,
    ACTIONS(616), 1,
      sym_identifier,
  [4741] = 1,
    ACTIONS(800), 1,
      anon_sym_COMMA,
  [4745] = 1,
    ACTIONS(762), 1,
      anon_sym_COMMA,
  [4749] = 1,
    ACTIONS(802), 1,
      sym_identifier,
  [4753] = 1,
    ACTIONS(804), 1,
      sym_identifier,
  [4757] = 1,
    ACTIONS(806), 1,
      anon_sym_SEMI,
  [4761] = 1,
    ACTIONS(808), 1,
      anon_sym_SEMI,
  [4765] = 1,
    ACTIONS(810), 1,
      anon_sym_COLON,
  [4769] = 1,
    ACTIONS(772), 1,
      anon_sym_COMMA,
  [4773] = 1,
    ACTIONS(812), 1,
      anon_sym_SEMI,
  [4777] = 1,
    ACTIONS(590), 1,
      anon_sym_SEMI,
  [4781] = 1,
    ACTIONS(814), 1,
      sym_identifier,
  [4785] = 1,
    ACTIONS(816), 1,
      sym_identifier,
  [4789] = 1,
    ACTIONS(818), 1,
      anon_sym_SEMI,
  [4793] = 1,
    ACTIONS(820), 1,
      anon_sym_COMMA,
  [4797] = 1,
    ACTIONS(822), 1,
      anon_sym_SEMI,
  [4801] = 1,
    ACTIONS(824), 1,
      anon_sym_RPAREN,
  [4805] = 1,
    ACTIONS(598), 1,
      sym_identifier,
  [4809] = 1,
    ACTIONS(826), 1,
      anon_sym_DQUOTE,
  [4813] = 1,
    ACTIONS(693), 1,
      anon_sym_COMMA,
  [4817] = 1,
    ACTIONS(828), 1,
      sym_identifier,
  [4821] = 1,
    ACTIONS(830), 1,
      sym_identifier,
  [4825] = 1,
    ACTIONS(832), 1,
      sym_identifier,
  [4829] = 1,
    ACTIONS(834), 1,
      sym_identifier,
  [4833] = 1,
    ACTIONS(836), 1,
      sym_identifier,
  [4837] = 1,
    ACTIONS(838), 1,
      sym_identifier,
  [4841] = 1,
    ACTIONS(840), 1,
      sym_identifier,
  [4845] = 1,
    ACTIONS(842), 1,
      sym_identifier,
  [4849] = 1,
    ACTIONS(844), 1,
      sym_identifier,
  [4853] = 1,
    ACTIONS(846), 1,
      sym_identifier,
  [4857] = 1,
    ACTIONS(848), 1,
      anon_sym_SEMI,
  [4861] = 1,
    ACTIONS(588), 1,
      anon_sym_SEMI,
  [4865] = 1,
    ACTIONS(850), 1,
      anon_sym_LPAREN,
  [4869] = 1,
    ACTIONS(730), 1,
      anon_sym_COMMA,
  [4873] = 1,
    ACTIONS(852), 1,
      anon_sym_SEMI,
  [4877] = 1,
    ACTIONS(854), 1,
      anon_sym_SEMI,
  [4881] = 1,
    ACTIONS(856), 1,
      anon_sym_SEMI,
  [4885] = 1,
    ACTIONS(858), 1,
      sym_identifier,
  [4889] = 1,
    ACTIONS(860), 1,
      ts_builtin_sym_end,
  [4893] = 1,
    ACTIONS(862), 1,
      sym_identifier,
  [4897] = 1,
    ACTIONS(864), 1,
      sym_identifier,
  [4901] = 1,
    ACTIONS(866), 1,
      sym_identifier,
  [4905] = 1,
    ACTIONS(868), 1,
      sym_identifier,
  [4909] = 1,
    ACTIONS(720), 1,
      anon_sym_SEMI,
  [4913] = 1,
    ACTIONS(870), 1,
      sym_identifier,
  [4917] = 1,
    ACTIONS(872), 1,
      anon_sym_RPAREN,
  [4921] = 1,
    ACTIONS(874), 1,
      anon_sym_COLON,
  [4925] = 1,
    ACTIONS(876), 1,
      sym_identifier,
  [4929] = 1,
    ACTIONS(878), 1,
      sym_identifier,
  [4933] = 1,
    ACTIONS(880), 1,
      anon_sym_SEMI,
  [4937] = 1,
    ACTIONS(882), 1,
      sym_identifier,
  [4941] = 1,
    ACTIONS(884), 1,
      anon_sym_RPAREN,
  [4945] = 1,
    ACTIONS(886), 1,
      sym_path,
  [4949] = 1,
    ACTIONS(675), 1,
      anon_sym_SEMI,
  [4953] = 1,
    ACTIONS(888), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 77,
  [SMALL_STATE(4)] = 154,
  [SMALL_STATE(5)] = 208,
  [SMALL_STATE(6)] = 262,
  [SMALL_STATE(7)] = 316,
  [SMALL_STATE(8)] = 368,
  [SMALL_STATE(9)] = 404,
  [SMALL_STATE(10)] = 440,
  [SMALL_STATE(11)] = 476,
  [SMALL_STATE(12)] = 520,
  [SMALL_STATE(13)] = 564,
  [SMALL_STATE(14)] = 599,
  [SMALL_STATE(15)] = 634,
  [SMALL_STATE(16)] = 669,
  [SMALL_STATE(17)] = 711,
  [SMALL_STATE(18)] = 743,
  [SMALL_STATE(19)] = 782,
  [SMALL_STATE(20)] = 819,
  [SMALL_STATE(21)] = 856,
  [SMALL_STATE(22)] = 893,
  [SMALL_STATE(23)] = 919,
  [SMALL_STATE(24)] = 945,
  [SMALL_STATE(25)] = 971,
  [SMALL_STATE(26)] = 997,
  [SMALL_STATE(27)] = 1023,
  [SMALL_STATE(28)] = 1049,
  [SMALL_STATE(29)] = 1075,
  [SMALL_STATE(30)] = 1101,
  [SMALL_STATE(31)] = 1127,
  [SMALL_STATE(32)] = 1152,
  [SMALL_STATE(33)] = 1177,
  [SMALL_STATE(34)] = 1208,
  [SMALL_STATE(35)] = 1233,
  [SMALL_STATE(36)] = 1258,
  [SMALL_STATE(37)] = 1289,
  [SMALL_STATE(38)] = 1320,
  [SMALL_STATE(39)] = 1344,
  [SMALL_STATE(40)] = 1368,
  [SMALL_STATE(41)] = 1392,
  [SMALL_STATE(42)] = 1422,
  [SMALL_STATE(43)] = 1444,
  [SMALL_STATE(44)] = 1468,
  [SMALL_STATE(45)] = 1492,
  [SMALL_STATE(46)] = 1514,
  [SMALL_STATE(47)] = 1538,
  [SMALL_STATE(48)] = 1560,
  [SMALL_STATE(49)] = 1582,
  [SMALL_STATE(50)] = 1606,
  [SMALL_STATE(51)] = 1630,
  [SMALL_STATE(52)] = 1654,
  [SMALL_STATE(53)] = 1678,
  [SMALL_STATE(54)] = 1702,
  [SMALL_STATE(55)] = 1723,
  [SMALL_STATE(56)] = 1744,
  [SMALL_STATE(57)] = 1765,
  [SMALL_STATE(58)] = 1786,
  [SMALL_STATE(59)] = 1807,
  [SMALL_STATE(60)] = 1828,
  [SMALL_STATE(61)] = 1849,
  [SMALL_STATE(62)] = 1870,
  [SMALL_STATE(63)] = 1891,
  [SMALL_STATE(64)] = 1912,
  [SMALL_STATE(65)] = 1933,
  [SMALL_STATE(66)] = 1954,
  [SMALL_STATE(67)] = 1975,
  [SMALL_STATE(68)] = 1996,
  [SMALL_STATE(69)] = 2017,
  [SMALL_STATE(70)] = 2038,
  [SMALL_STATE(71)] = 2059,
  [SMALL_STATE(72)] = 2080,
  [SMALL_STATE(73)] = 2101,
  [SMALL_STATE(74)] = 2122,
  [SMALL_STATE(75)] = 2143,
  [SMALL_STATE(76)] = 2164,
  [SMALL_STATE(77)] = 2185,
  [SMALL_STATE(78)] = 2206,
  [SMALL_STATE(79)] = 2231,
  [SMALL_STATE(80)] = 2252,
  [SMALL_STATE(81)] = 2273,
  [SMALL_STATE(82)] = 2300,
  [SMALL_STATE(83)] = 2321,
  [SMALL_STATE(84)] = 2342,
  [SMALL_STATE(85)] = 2363,
  [SMALL_STATE(86)] = 2384,
  [SMALL_STATE(87)] = 2431,
  [SMALL_STATE(88)] = 2452,
  [SMALL_STATE(89)] = 2473,
  [SMALL_STATE(90)] = 2494,
  [SMALL_STATE(91)] = 2515,
  [SMALL_STATE(92)] = 2537,
  [SMALL_STATE(93)] = 2559,
  [SMALL_STATE(94)] = 2583,
  [SMALL_STATE(95)] = 2607,
  [SMALL_STATE(96)] = 2631,
  [SMALL_STATE(97)] = 2655,
  [SMALL_STATE(98)] = 2676,
  [SMALL_STATE(99)] = 2697,
  [SMALL_STATE(100)] = 2716,
  [SMALL_STATE(101)] = 2737,
  [SMALL_STATE(102)] = 2758,
  [SMALL_STATE(103)] = 2780,
  [SMALL_STATE(104)] = 2802,
  [SMALL_STATE(105)] = 2820,
  [SMALL_STATE(106)] = 2836,
  [SMALL_STATE(107)] = 2852,
  [SMALL_STATE(108)] = 2868,
  [SMALL_STATE(109)] = 2884,
  [SMALL_STATE(110)] = 2905,
  [SMALL_STATE(111)] = 2936,
  [SMALL_STATE(112)] = 2969,
  [SMALL_STATE(113)] = 3000,
  [SMALL_STATE(114)] = 3021,
  [SMALL_STATE(115)] = 3052,
  [SMALL_STATE(116)] = 3083,
  [SMALL_STATE(117)] = 3104,
  [SMALL_STATE(118)] = 3137,
  [SMALL_STATE(119)] = 3170,
  [SMALL_STATE(120)] = 3201,
  [SMALL_STATE(121)] = 3232,
  [SMALL_STATE(122)] = 3252,
  [SMALL_STATE(123)] = 3272,
  [SMALL_STATE(124)] = 3292,
  [SMALL_STATE(125)] = 3311,
  [SMALL_STATE(126)] = 3330,
  [SMALL_STATE(127)] = 3349,
  [SMALL_STATE(128)] = 3368,
  [SMALL_STATE(129)] = 3387,
  [SMALL_STATE(130)] = 3406,
  [SMALL_STATE(131)] = 3425,
  [SMALL_STATE(132)] = 3449,
  [SMALL_STATE(133)] = 3473,
  [SMALL_STATE(134)] = 3497,
  [SMALL_STATE(135)] = 3519,
  [SMALL_STATE(136)] = 3541,
  [SMALL_STATE(137)] = 3563,
  [SMALL_STATE(138)] = 3572,
  [SMALL_STATE(139)] = 3581,
  [SMALL_STATE(140)] = 3590,
  [SMALL_STATE(141)] = 3599,
  [SMALL_STATE(142)] = 3616,
  [SMALL_STATE(143)] = 3625,
  [SMALL_STATE(144)] = 3634,
  [SMALL_STATE(145)] = 3643,
  [SMALL_STATE(146)] = 3652,
  [SMALL_STATE(147)] = 3661,
  [SMALL_STATE(148)] = 3670,
  [SMALL_STATE(149)] = 3679,
  [SMALL_STATE(150)] = 3696,
  [SMALL_STATE(151)] = 3705,
  [SMALL_STATE(152)] = 3714,
  [SMALL_STATE(153)] = 3731,
  [SMALL_STATE(154)] = 3745,
  [SMALL_STATE(155)] = 3757,
  [SMALL_STATE(156)] = 3771,
  [SMALL_STATE(157)] = 3785,
  [SMALL_STATE(158)] = 3797,
  [SMALL_STATE(159)] = 3811,
  [SMALL_STATE(160)] = 3823,
  [SMALL_STATE(161)] = 3835,
  [SMALL_STATE(162)] = 3851,
  [SMALL_STATE(163)] = 3865,
  [SMALL_STATE(164)] = 3879,
  [SMALL_STATE(165)] = 3887,
  [SMALL_STATE(166)] = 3903,
  [SMALL_STATE(167)] = 3917,
  [SMALL_STATE(168)] = 3931,
  [SMALL_STATE(169)] = 3943,
  [SMALL_STATE(170)] = 3957,
  [SMALL_STATE(171)] = 3971,
  [SMALL_STATE(172)] = 3983,
  [SMALL_STATE(173)] = 3997,
  [SMALL_STATE(174)] = 4011,
  [SMALL_STATE(175)] = 4025,
  [SMALL_STATE(176)] = 4037,
  [SMALL_STATE(177)] = 4049,
  [SMALL_STATE(178)] = 4061,
  [SMALL_STATE(179)] = 4077,
  [SMALL_STATE(180)] = 4089,
  [SMALL_STATE(181)] = 4103,
  [SMALL_STATE(182)] = 4117,
  [SMALL_STATE(183)] = 4131,
  [SMALL_STATE(184)] = 4145,
  [SMALL_STATE(185)] = 4153,
  [SMALL_STATE(186)] = 4167,
  [SMALL_STATE(187)] = 4180,
  [SMALL_STATE(188)] = 4193,
  [SMALL_STATE(189)] = 4200,
  [SMALL_STATE(190)] = 4211,
  [SMALL_STATE(191)] = 4221,
  [SMALL_STATE(192)] = 4231,
  [SMALL_STATE(193)] = 4237,
  [SMALL_STATE(194)] = 4247,
  [SMALL_STATE(195)] = 4253,
  [SMALL_STATE(196)] = 4259,
  [SMALL_STATE(197)] = 4265,
  [SMALL_STATE(198)] = 4271,
  [SMALL_STATE(199)] = 4277,
  [SMALL_STATE(200)] = 4287,
  [SMALL_STATE(201)] = 4297,
  [SMALL_STATE(202)] = 4307,
  [SMALL_STATE(203)] = 4313,
  [SMALL_STATE(204)] = 4319,
  [SMALL_STATE(205)] = 4325,
  [SMALL_STATE(206)] = 4331,
  [SMALL_STATE(207)] = 4337,
  [SMALL_STATE(208)] = 4347,
  [SMALL_STATE(209)] = 4357,
  [SMALL_STATE(210)] = 4363,
  [SMALL_STATE(211)] = 4373,
  [SMALL_STATE(212)] = 4379,
  [SMALL_STATE(213)] = 4389,
  [SMALL_STATE(214)] = 4399,
  [SMALL_STATE(215)] = 4405,
  [SMALL_STATE(216)] = 4415,
  [SMALL_STATE(217)] = 4421,
  [SMALL_STATE(218)] = 4427,
  [SMALL_STATE(219)] = 4437,
  [SMALL_STATE(220)] = 4447,
  [SMALL_STATE(221)] = 4457,
  [SMALL_STATE(222)] = 4467,
  [SMALL_STATE(223)] = 4477,
  [SMALL_STATE(224)] = 4483,
  [SMALL_STATE(225)] = 4493,
  [SMALL_STATE(226)] = 4500,
  [SMALL_STATE(227)] = 4507,
  [SMALL_STATE(228)] = 4514,
  [SMALL_STATE(229)] = 4521,
  [SMALL_STATE(230)] = 4526,
  [SMALL_STATE(231)] = 4533,
  [SMALL_STATE(232)] = 4540,
  [SMALL_STATE(233)] = 4547,
  [SMALL_STATE(234)] = 4554,
  [SMALL_STATE(235)] = 4561,
  [SMALL_STATE(236)] = 4568,
  [SMALL_STATE(237)] = 4575,
  [SMALL_STATE(238)] = 4580,
  [SMALL_STATE(239)] = 4587,
  [SMALL_STATE(240)] = 4594,
  [SMALL_STATE(241)] = 4601,
  [SMALL_STATE(242)] = 4608,
  [SMALL_STATE(243)] = 4615,
  [SMALL_STATE(244)] = 4622,
  [SMALL_STATE(245)] = 4629,
  [SMALL_STATE(246)] = 4636,
  [SMALL_STATE(247)] = 4643,
  [SMALL_STATE(248)] = 4650,
  [SMALL_STATE(249)] = 4657,
  [SMALL_STATE(250)] = 4662,
  [SMALL_STATE(251)] = 4669,
  [SMALL_STATE(252)] = 4676,
  [SMALL_STATE(253)] = 4681,
  [SMALL_STATE(254)] = 4685,
  [SMALL_STATE(255)] = 4689,
  [SMALL_STATE(256)] = 4693,
  [SMALL_STATE(257)] = 4697,
  [SMALL_STATE(258)] = 4701,
  [SMALL_STATE(259)] = 4705,
  [SMALL_STATE(260)] = 4709,
  [SMALL_STATE(261)] = 4713,
  [SMALL_STATE(262)] = 4717,
  [SMALL_STATE(263)] = 4721,
  [SMALL_STATE(264)] = 4725,
  [SMALL_STATE(265)] = 4729,
  [SMALL_STATE(266)] = 4733,
  [SMALL_STATE(267)] = 4737,
  [SMALL_STATE(268)] = 4741,
  [SMALL_STATE(269)] = 4745,
  [SMALL_STATE(270)] = 4749,
  [SMALL_STATE(271)] = 4753,
  [SMALL_STATE(272)] = 4757,
  [SMALL_STATE(273)] = 4761,
  [SMALL_STATE(274)] = 4765,
  [SMALL_STATE(275)] = 4769,
  [SMALL_STATE(276)] = 4773,
  [SMALL_STATE(277)] = 4777,
  [SMALL_STATE(278)] = 4781,
  [SMALL_STATE(279)] = 4785,
  [SMALL_STATE(280)] = 4789,
  [SMALL_STATE(281)] = 4793,
  [SMALL_STATE(282)] = 4797,
  [SMALL_STATE(283)] = 4801,
  [SMALL_STATE(284)] = 4805,
  [SMALL_STATE(285)] = 4809,
  [SMALL_STATE(286)] = 4813,
  [SMALL_STATE(287)] = 4817,
  [SMALL_STATE(288)] = 4821,
  [SMALL_STATE(289)] = 4825,
  [SMALL_STATE(290)] = 4829,
  [SMALL_STATE(291)] = 4833,
  [SMALL_STATE(292)] = 4837,
  [SMALL_STATE(293)] = 4841,
  [SMALL_STATE(294)] = 4845,
  [SMALL_STATE(295)] = 4849,
  [SMALL_STATE(296)] = 4853,
  [SMALL_STATE(297)] = 4857,
  [SMALL_STATE(298)] = 4861,
  [SMALL_STATE(299)] = 4865,
  [SMALL_STATE(300)] = 4869,
  [SMALL_STATE(301)] = 4873,
  [SMALL_STATE(302)] = 4877,
  [SMALL_STATE(303)] = 4881,
  [SMALL_STATE(304)] = 4885,
  [SMALL_STATE(305)] = 4889,
  [SMALL_STATE(306)] = 4893,
  [SMALL_STATE(307)] = 4897,
  [SMALL_STATE(308)] = 4901,
  [SMALL_STATE(309)] = 4905,
  [SMALL_STATE(310)] = 4909,
  [SMALL_STATE(311)] = 4913,
  [SMALL_STATE(312)] = 4917,
  [SMALL_STATE(313)] = 4921,
  [SMALL_STATE(314)] = 4925,
  [SMALL_STATE(315)] = 4929,
  [SMALL_STATE(316)] = 4933,
  [SMALL_STATE(317)] = 4937,
  [SMALL_STATE(318)] = 4941,
  [SMALL_STATE(319)] = 4945,
  [SMALL_STATE(320)] = 4949,
  [SMALL_STATE(321)] = 4953,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(262),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(319),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(317),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(315),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(314),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(311),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(223),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(309),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(308),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(307),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(306),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(221),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_structure_block_repeat1, 2, 0, 0),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_structure_block_repeat1, 2, 0, 0), SHIFT_REPEAT(188),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_structure_block_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_structure_block_repeat1, 2, 0, 0), SHIFT_REPEAT(313),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_structure_block_repeat1, 2, 0, 0), SHIFT_REPEAT(224),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_structure_block_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_structure_block_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(188),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(219),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 2, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_argument_list, 3, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_argument_list, 3, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_argument_list, 2, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_argument_list, 2, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_block, 2, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_structure_block, 2, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 3, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_block, 2, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_block, 3, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_structure_block, 3, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_block, 3, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snmp_rpc_block, 2, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_block, 3, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_block, 2, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 4, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snmp_rpc_block, 3, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_definition, 5, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_definition, 3, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_definition, 4, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 3, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_structure_definition, 3, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_structure_definition, 4, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 4, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snmp_object_definition, 5, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 5, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_definition, 3, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef_definition, 3, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 5, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef_definition, 4, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_definition, 3, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snmp_interface_definition, 4, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 6, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snmp_table_definition, 4, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snmp_object_definition, 4, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 3, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snmp_object_definition, 3, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 4, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snmp_table_definition, 3, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snmp_interface_definition, 5, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_definition, 6, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snmp_interface_definition, 3, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_typedef_definition_repeat1, 2, 0, 0),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typedef_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(219),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snmp_rpc_block, 4, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_block, 4, 0, 0),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snmp_table_definition, 5, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_structure_block, 4, 0, 0),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 3, 0, 0),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 3, 0, 0),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2, 0, 0),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typedef_definition_repeat1, 2, 0, 0),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typedef_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(221),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_qualifier, 1, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rpc_block_repeat1, 2, 0, 0),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpc_block_repeat1, 2, 0, 0), SHIFT_REPEAT(274),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpc_block_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpc_block_repeat1, 2, 0, 0), SHIFT_REPEAT(222),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpc_block_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpc_block_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [464] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [467] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_block_repeat1, 2, 0, 0),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_block_repeat1, 2, 0, 0), SHIFT_REPEAT(274),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_block_repeat1, 2, 0, 0), SHIFT_REPEAT(215),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_block_repeat1, 2, 0, 0), SHIFT_REPEAT(222),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_block_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_block_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_snmp_rpc_block_repeat1, 2, 0, 0),
  [491] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_snmp_rpc_block_repeat1, 2, 0, 0), SHIFT_REPEAT(274),
  [494] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_snmp_rpc_block_repeat1, 2, 0, 0), SHIFT_REPEAT(201),
  [497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_snmp_rpc_block_repeat1, 2, 0, 0), SHIFT_REPEAT(222),
  [500] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_snmp_rpc_block_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_snmp_rpc_block_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [516] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [522] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat2, 2, 0, 0), SHIFT_REPEAT(124),
  [525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat2, 2, 0, 0), SHIFT_REPEAT(124),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat2, 2, 0, 0),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_block_repeat1, 2, 0, 0),
  [568] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_block_repeat1, 2, 0, 0), SHIFT_REPEAT(274),
  [571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_block_repeat1, 2, 0, 0), SHIFT_REPEAT(271),
  [574] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_block_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [577] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_block_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snmp_rpc, 5, 0, 0),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snmp_rpc, 3, 0, 0),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 3, 0, 0),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snmp_rpc, 2, 0, 0),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 7, 0, 0),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 2, 0, 0),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 4, 0, 0),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 5, 0, 0),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 6, 0, 0),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snmp_rpc, 4, 0, 0),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [630] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typedef_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(222),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_field, 3, 0, 0),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, 0, 0),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2, 0, 0),
  [651] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(223),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, 0, 0),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_field, 4, 0, 0),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [664] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat2, 2, 0, 0), SHIFT_REPEAT(237),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat2, 2, 0, 0),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 2, 0, 0),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3, 0, 0),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2, 0, 0),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 2, 0, 0),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5, 0, 0),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 3, 0, 0),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_in, 2, 0, 0),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_inheritance_repeat1, 2, 0, 0),
  [699] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_inheritance_repeat1, 2, 0, 0), SHIFT_REPEAT(300),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4, 0, 0),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, 0, 0),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 1, 0, 0),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_value, 2, 0, 0),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_modifier, 1, 0, 0),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_inheritance, 3, 0, 0),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_out, 2, 0, 0),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_inheritance, 2, 0, 0),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_inheritance, 2, 0, 0),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snmp_rpc_in, 3, 0, 0),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_specifier, 1, 0, 0),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2, 0, 0),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snmp_rpc_in, 4, 0, 0),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snmp_rpc_in, 5, 0, 0),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 4, 0, 0),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [860] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_structure_type, 1, 0, 0),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_throw, 2, 0, 0),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_iop(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
