module.exports = grammar({
  name: 'iop',

  extras: $ => [
    /\s|\\\r?\n/,
    $.comment,
  ],

  externals: $ => [
    $._block_comment_content,
  ],

  rules: {

    source_file: $ => repeat(choice(
      $.package_definition,
      $.typedef_definition,
      $.import_definition,

      $.module_definition,
      $.data_structure_definition,
      $.class_definition,
      $.enum_definition,
      $.interface_definition,
      $.snmp_object_definition,
      $.snmp_table_definition,
      $.snmp_interface_definition,
    )),

    package_definition: $ => seq(
      'package',
      $.identifier,
      ';',
    ),

    typedef_definition: $ => seq(
      repeat($.attribute),
      "typedef",
      $.variable,
      ";"
    ),

    import_definition: $ => seq(
      "import",
      $.path,
      ";"
    ),

    path: $ => /[a-zA-Z][a-zA-Z0-9_.*]*/,

    module_definition: $ => seq(
      repeat($.attribute),
      "module",
      $.identifier,
      optional($.module_inheritance),
      $.module_block,
      optional(";"),
    ),

    module_inheritance: $ => seq(
      ":",
      repeat(seq($.identifier, ",")),
      $.identifier,
    ),

    module_block: $ => seq(
      "{",
      repeat($.module_field),
      "}",
    ),

    module_field: $ => seq(
      optional($.tag),
      $.identifier,
      $.identifier,
      ";"
    ),

    enum_definition: $ => seq(
      repeat($.attribute),
      "enum",
      $.identifier,
      $.enum_block,
      optional(";"),
    ),

    enum_block: $ => seq(
      "{",
      repeat(seq($.enum_field, ",")),
      "}",
    ),

    enum_field: $ => seq(
      repeat($.attribute),
      optional($.tag),
      $.identifier,
      optional($.default_value),
    ),

    default_value: $ => seq(
      "=",
      $.value,
    ),

    interface_definition: $ => seq(
      repeat($.attribute),
      "interface",
      $.identifier,
      $.rpc_block,
    ),

    rpc_block: $ => seq(
      "{",
      repeat($.rpc),
      "}",
      optional(";"),
    ),

    rpc: $ => seq(
      repeat($.attribute),
      optional($.tag),
      $.identifier,
      optional($.rpc_in),
      optional($.rpc_out),
      optional($.rpc_throw),
      ";",
    ),

    rpc_in: $ => seq(
      "in",
      choice($.argument_list, "null", "void", $.identifier),
    ),

    rpc_out: $ => seq(
      "out",
      choice($.argument_list, "null", "void", $.identifier),
    ),

    rpc_throw: $ => seq(
      "throw",
      choice($.argument_list, $.identifier),
    ),

    argument_list: $ => seq(
      "(",
      repeat(seq(repeat($.attribute), optional($.tag), $.variable, ",")),
      optional(seq(repeat($.attribute), optional($.tag), $.variable)),
      ")"
    ),

    class_definition: $ => seq(
      repeat($.attribute),
      repeat($.class_modifier),
      "class",
      $.identifier,
      repeat($.class_inheritance),
      $.data_structure_block,
    ),

    class_modifier: $ => choice(
      "abstract",
      "local",
    ),

    class_inheritance: $ => seq(
      ":",
      choice($.tag_number, $.identifier),
    ),

    data_structure_definition: $ => seq(
      repeat($.attribute),
      $.data_structure_type,
      $.identifier,
      $.data_structure_block,
    ),

    data_structure_type: $ => choice(
      'union',
      'struct',
    ),

    data_structure_block: $ => seq(
      '{',
      repeat(choice($.attribute, $.field)),
      '}',
      optional(";"),
    ),

    field: $ => seq(
      optional($.tag),
      optional($.field_qualifier),
      $.variable,
      ";",
    ),

    field_qualifier: $ => choice(
      "static",
    ),

    variable: $ => seq(
      $.type,
      optional($.type_specifier),
      $.identifier,
      optional($.default_value),
    ),

    type: $ => choice(
      'int',
      'string',
      'uint',
      'long',
      'ulong',
      'byte',
      'ubyte',
      'short',
      'ushort',
      'bool',
      'double',
      'bytes',
      'xml',
      'void',
      $.identifier,
    ),

    type_specifier: $ => choice(
      "?",
      "&",
      "[]",
    ),

    value: $ => choice(
      $.string,
      $.char_literal,
      repeat1(choice(
        $.number,
        $.identifier,
        $.operator,
        $.constant,
        $.parenthesized_expression,
      )),
    ),

    parenthesized_expression: $ => seq(
      "(",
      repeat1(choice(
        $.number,
        $.identifier,
        $.operator,
        $.constant,
        $.parenthesized_expression,
      )),
      ")",
    ),

    string: $ => seq(
      '"',
      optional($.string_content),
      '"',
    ),

    string_content: _ => /[^"\\]*(\\.([^"\\]*)?)*/,

    char_literal: $ => seq(
      'c',
      $.string,
    ),

    number: $ => choice(
      /-?[0-9]*\.[0-9]+([eE][+-]?[0-9]+)?/,
      /-?(0x[0-9a-fA-F]+|[1-9][0-9]*)[a-zA-Z]*/,
      /0[0-7]*[a-zA-Z]*/,
    ),

    operator: $ => choice(
      "<<",
      ">>",
      "**",
      "*",
      "+",
      "-",
      "/",
      "&",
      "|",
      "~",
    ),

    constant: $ => choice(
      "true",
      "false",
    ),

    tag_number: $ => /0x[0-9a-fA-F]+|[0-9]+/,

    tag: $ => seq(
      $.tag_number,
      ":",
    ),

    identifier: $ => /[a-zA-Z][.a-zA-Z0-9_]*/,

    // SNMP definitions
    snmp_object_definition: $ => seq(
      repeat($.attribute),
      "snmpObj",
      $.identifier,
      repeat($.class_inheritance),
      $.data_structure_block,
    ),

    snmp_table_definition: $ => seq(
      repeat($.attribute),
      "snmpTbl",
      $.identifier,
      repeat($.class_inheritance),
      $.data_structure_block,
    ),

    snmp_interface_definition: $ => seq(
      repeat($.attribute),
      "snmpIface",
      $.identifier,
      repeat($.class_inheritance),
      $.snmp_rpc_block,
    ),

    snmp_rpc_block: $ => seq(
      "{",
      repeat($.snmp_rpc),
      "}",
      optional(";"),
    ),

    snmp_rpc: $ => seq(
      repeat($.attribute),
      optional($.tag),
      $.identifier,
      optional($.snmp_rpc_in),
      ";",
    ),

    snmp_rpc_in: $ => seq(
      "in",
      "(",
      repeat(seq($.identifier, ",")),
      optional($.identifier),
      ")",
    ),

    attribute: $ => seq(
      "@",
      choice(
        $.identifier,
        $.attribute_argument_list,
        seq($.identifier, $.attribute_argument_list),
      ),
    ),

    attribute_argument_list: $ => seq(
      "(",
      optional($.attribute_content),
      ")"
    ),

    // Flexible attribute content: handles quoted strings (opaque, parens inside
    // don't need balancing) and up to two levels of explicit paren nesting.
    attribute_content: _ => /([^()"\\]|\\.|"([^"\\]|\\.)*"|\(([^()"\\]|\\.|"([^"\\]|\\.)*"|\(([^()"\\]|\\.|"([^"\\]|\\.)*")*\))*\))*/,

    // Structured comment with doc_ref support.
    // doc_ref is a single token (token.immediate) that matches the
    // complete sequence \tag identifier.  It has higher precedence
    // than the catch-all patterns so the lexer prefers it.
    comment: $ => choice(
      // Line comment (single token — doc_ref only in block comments)
      token(seq('//', /[^\n]*/)),
      // Block comment
      seq(
        '/*',
        repeat(choice(
          $.doc_ref,
          token.immediate(prec(-1, /\\[^\n]/)),
          token.immediate(/\\/),
          $._block_comment_content,
        )),
        token.immediate('*/'),
      ),
    ),

    doc_ref: $ => token.immediate(prec(1, seq(
      '\\',
      choice('p', 'ref', 'see', 'a', 'c', 'class', 'struct', 'enum', 'typedef', 'union'),
      /[ \t]+/,
      /[a-zA-Z][.a-zA-Z0-9_]*/,
    ))),
  }
});
