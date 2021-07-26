
const identifier = /[a-zA-Z_][a-zA-Z0-9-_.]*/;

// A node identifier just refers to the name of a YANG node. Commonly used to
// refer to a custom type or a grouping. A local reference will just be a
// regular identifier. A reference to a different module will have a prefix.
const node_identifier = /([a-zA-Z_][a-zA-Z0-9-_.]*:)?[a-zA-Z_][a-zA-Z0-9-_.]*/;

const prefix = () => seq(identifier, token.immediate(":"))

const relative_keypath = () => seq(node_identifier, absolute_keypath());
const absolute_keypath = () => repeat1(seq('/', node_identifier));

module.exports = grammar({
    name: "yang",

    extras: $ => [
        /\s+/,
        $.comment,
    ],

    word: $ => $._word,

    rules: {
        yang: $ => choice(
            $.module,
            $.submodule,
        ),

        module: $ => seq(
            'module',
            field('module_name', choice($.identifier, $.string)),
            field('module_block', $.block),
        ),

        submodule: $ => seq(
            'submodule',
            field('submodule_name', choice($.identifier, $.string)),
            field('submodule_block', $.block),
        ),

        block: $ => seq(
            '{',
            repeat(choice(
                $.statement,
                $.extension_statement,
            )),
            '}',
        ),

        statement: $ => choice(
            $._yang_version_statement,
            $._enum_statement,
            $._range_statement,
            $._length_statement,
            $._generic_statement,
        ),

        _yang_version_statement: $ => seq(
            alias('yang-version', $.statement_keyword),
            alias($.yang_version_argument, $.argument),
            ';'
        ),

        _enum_statement: $ => seq(
            alias('enum', $.statement_keyword),
            alias($.enum_argument, $.argument),
            choice(
                ';',
                $.block,
            )
        ),

        _range_statement: $ => seq(
            alias('range', $.statement_keyword),
            alias($.range_argument, $.argument),
            choice(
                ';',
                $.block,
            )
        ),

        _length_statement: $ => seq(
            alias('length', $.statement_keyword),
            alias($.length_argument, $.argument),
            ';'
        ),

        _generic_statement: $ => seq(
            $.statement_keyword,

            // A statement can either have
            // - An argument
            // - An argument and a block
            // - Just a block
            choice(
                // An argument
                seq($._sep, $.argument, ';'),

                // An argument and a block
                seq($._sep, $.argument, $.block),

                // Just a block
                seq(optional($._sep), $.block),
            )
        ),

        extension_statement: $ => seq(
            $.extension_keyword,

            // Extension statements have the same possible values as a regular
            // statement, but can also be used with no value
            choice(
                // No arguments
                ';',

                // An argument
                seq($._sep, $.argument, ';'),

                // An argument and a block
                seq($._sep, $.argument, $.block),

                // Just a block
                seq(optional($._sep), $.block),
            )
        ),

        // Extensions in YANG are just an identifier with a prefix, for example:
        //
        //   tailf:actionpoint
        //
        // An extension keyword may be prefixed by a statement keyword like
        // "config". To prevent "config" from being parsed as a
        // $.statement_keyword, this symbol is marked as a token with increased
        // priority.
        //
        extension_keyword: $ => token(prec(10,
            seq(prefix(), token.immediate(identifier))
        )),

        argument: $ => choice(
            $.built_in_type,
            $.node_identifier,
            $.number,
            alias($.hex, $.number),
            $.boolean,
            $.string,
            $.string_concatenation,
            $.date,
            $.keypath,
            $.unquoted_string,
        ),

        yang_version_argument: $ => $.yang_version,

        enum_argument: $ => choice(
            $.string,
            alias($._unquoted_string, $.enum_value),
        ),

        range_argument: $ => $.range,

        length_argument: $ => choice(
            prec(2, $.number),
            prec(1, $.range),
        ),

        identifier: $ => identifier,

        node_identifier: $ => node_identifier,

        // A number in YANG can optionally have a decimal component, and it can
        // optionally have a leading + or -
        _number: $ => /[-+]?[0-9]+(\.[0-9]+)?/,

        number: $ => prec.left($._number),

        hex: $ => /-?0[xX][a-zA-Z0-9]+/,

        boolean: $ => choice("true", "false"),

        // Copied from "tree-sitter-javascript":
        //
        // Slightly modified to hide the string fragments from the syntax tree
        // in the single quote string.
        //
        // https://github.com/tree-sitter/tree-sitter-javascript/blob/2c5b138ea488259dbf11a34595042eb261965259/grammar.js#L865
        //
        string: $ => choice(
            seq(
                '"',
                repeat(choice(
                    alias(
                        $._unescaped_double_string_fragment,
                        $.string_fragment
                    ),
                    $.escape_sequence,
                )),
                '"'
            ),
            seq(
                "'",
                optional($._unescaped_single_string_fragment),
                "'"
            )
        ),

        string_concatenation: $ => seq(
            repeat1(seq($.string, alias('+', $.plus_symbol))),
            $.string
        ),

        _unescaped_double_string_fragment: $ =>
            token.immediate(prec(1, /[^"\\]+/)),

        _unescaped_single_string_fragment: $ =>
            token.immediate(prec(1, /[^']+/)),

        escape_sequence: $ => token.immediate(seq(
            '\\',
            choice('n', 't', '"', '\\')
            )
        ),

        date: $ => /\d{4}-\d{2}-\d{2}/,

        range: $ => choice(
            $.unquoted_range,
            $.quoted_range,
        ),

        unquoted_range: $ => $._range,

        quoted_range: $ => choice(
            seq(
                '"',
                $._range,
                '"',
            ),
            seq(
                "'",
                $._range,
                "'",
            ),
        ),

        _range: $ => seq(
            choice(
                $._inner_range,
                $.number,
            ),
            repeat(seq(
                '|',
                choice(
                    $._inner_range,
                    $.number,
                )
            )),
        ),

        _inner_range: $ => seq(
            alias($._inner_range_start, $.start),
            '..',
            alias($._inner_range_end, $.end),
        ),

        _inner_range_start: $ => choice(
            $.number,
            alias('min', $.number)
        ),

        _inner_range_end: $ => choice(
            $.number,
            alias('max', $.number)
        ),

        _keypath: $ => token(
            choice(
                absolute_keypath(),
                relative_keypath(),
            )
        ),

        keypath: $ => $._keypath,

        yang_version: $ => seq(
            optional(choice('"', "'")),
            choice('1', '1.1'),
            optional(choice('"', "'")),
        ),

        // Unquoted strings are not explained in the ABNF grammar, but going by
        // all the examples in yang-modules, it seems like it can contain any
        // symbol except for whitespace, semicolons, quotes and curly brackets.
        //
        _unquoted_string: $ => /[^\s;"'{}]+/,

        unquoted_string: $ => $._unquoted_string,

        // Copied from "tree-sitter-javascript":
        //
        // https://github.com/tree-sitter/tree-sitter-javascript/blob/2c5b138ea488259dbf11a34595042eb261965259/grammar.js#L907
        //
        comment: $ => token(choice(
            seq('//', /(\\(.|\r?\n)|[^\\\n])*/),
            seq(
                '/*',
                /[^*]*\*+([^/*][^*]*\*+)*/,
                '/'
            )
        )),

        /*
         * Misc
         */

        _sep: $ => /\s+/,

        // Used as the grammar's "word" property. Each "word" is YANG is
        // delimited only by whitespace, curly brackets and semi-colons.
        _word: $ => /[^\s{};]/,

        built_in_type: $ => choice(
            'binary',
            'bits',
            'boolean',
            'decimal64',
            'empty',
            'enumeration',
            'identityref',
            'instance-identifier',
            'int8',
            'int16',
            'int32',
            'int64',
            'leafref',
            'string',
            'uint8',
            'uint16',
            'uint32',
            'uint64',
            'union',
        ),

        // All YANG statement keywords. Some keywords are commented out because
        // they are handled by a custom statement.
        statement_keyword: $ => choice(
            'action',
            'anydata',
            'anyxml',
            'argument',
            'augment',
            'base',
            'belongs-to',
            'bit',
            'case',
            'choice',
            'config',
            'contact',
            'container',
            'default',
            'description',
            'deviate',
            'deviation',
            // 'enum',
            'error-app-tag',
            'error-message',
            'extension',
            'feature',
            'fraction-digits',
            'grouping',
            'identity',
            'if-feature',
            'import',
            'include',
            'input',
            'key',
            'leaf',
            'leaf-list',
            // 'length',
            'list',
            'mandatory',
            'max-elements',
            'min-elements',
            'modifier',
            'module',
            'must',
            'namespace',
            'notification',
            'ordered-by',
            'organization',
            'output',
            'path',
            'pattern',
            'position',
            'prefix',
            'presence',
            // 'range',
            'reference',
            'refine',
            'require-instance',
            'revision',
            'revision-date',
            'rpc',
            'status',
            'submodule',
            'type',
            'typedef',
            'unique',
            'units',
            'uses',
            'value',
            'when',
            // 'yang-version',
            'yin-element',
        )
    },
});
