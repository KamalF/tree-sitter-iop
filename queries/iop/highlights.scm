; Keywords
[
  "interface"
  "class"
  "struct"
  "union"
  "enum"
  "typedef"
  "package"
  "module"
  "snmpObj"
  "snmpTbl"
  "snmpIface"
] @keyword.type

[
  "in"
  "out"
  "throw"
] @keyword

[
  "abstract"
  "local"
  "static"
  "null"
  "void"
] @keyword.modifier

[
  "true"
  "false"
] @boolean

"import" @keyword.import

; Modules / paths
(path) @module

; Numbers
(number) @number
(tag_number) @number

; Attributes
(attribute "@" @attribute (identifier)? @attribute)

; Type specifiers
(type_specifier) @punctuation.special

; Comments
(comment) @comment
(doc_ref) @type

; Package
(package_definition
  (identifier) @module)

; Enum
(enum_definition
  "enum" @keyword.type
  (identifier) @type)

(enum_field
  (identifier) @constant)

; Default values
(default_value
  (value
    (identifier) @variable))

; Structs / Unions
(data_structure_definition
  (identifier) @type)

; Classes
(class_definition
  "class" @keyword.type
  (identifier) @type)

(class_inheritance
  (identifier) @type)

; Interface
(interface_definition
  "interface" @keyword.type
  (identifier) @type)

; RPCs
(rpc
  (identifier) @function)

(rpc_in (identifier) @type)
(rpc_out (identifier) @type)
(rpc_throw (identifier) @type)

; Arguments
(argument_list (variable
  (identifier) @variable.parameter))

; SNMP
(snmp_object_definition
  (identifier) @type)

(snmp_table_definition
  (identifier) @type)

(snmp_interface_definition
  (identifier) @type)

(snmp_rpc
  (identifier) @function)

; Module definition
(module_definition
  "module" @keyword.type
  (identifier) @type)

(module_inheritance
  (identifier) @type)

(module_block
  (module_field
    (identifier) @type
    (identifier) @variable.parameter))

; Operators
[
  "="
] @operator
(operator) @operator

; Brackets
[
  "{"
  "}"
] @punctuation.bracket

[
  "("
  ")"
] @punctuation.bracket

; Delimiters
[
  ";"
  ":"
  ","
] @punctuation.delimiter

; Types (last so specific captures above take priority in same-specificity cases)
(type) @type

; Strings
(string) @string
(char_literal) @string

; Typedef
(typedef_definition
  "typedef" @keyword.type
  (variable
    (identifier) @type))
