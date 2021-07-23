
(comment) @comment

; Module / submodule
["module" "submodule"] @keyword

; Keywords
(statement_keyword) @keyword
(statement_keyword "import") @include
(statement_keyword "input") @keyword.return
(statement_keyword "output") @keyword.return
(extension_keyword) @function

; Arguments
(built_in_type) @type.builtin
(number) @number
(boolean) @boolean
(date) @number
(range (_ ".." @operator))
(quoted_range "\"" @string)
(yang_version) @constant.builtin
(identifier) @variable
(node_identifier) @variable
(string) @string
(string (escape_sequence) @string.escape)
(unquoted_string) @string
(keypath) @string.escape

; Always highlight the value of an enum statement as a string
(enum_value) @string

; Punctuation
(plus_symbol) @operator
["{" "}"] @punctuation.bracket
[";"] @punctuation.delimiter
