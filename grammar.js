module.exports = grammar({
    name: "yang",

    word: $ => $.identifier,

    rules: {
        // The root node
        module: $ => seq(
            choice('module', 'submodule'),
            field('module_name', $.identifier),
            field('module_block', $.block),
        ),

        block: $ => seq(
            '{',
            repeat($.statement),
            '}',
        ),

        statement: $ => seq(
            $.statement_keyword,
            $._sep,
            $.value,
            choice(
                $._stmtend,
                $.block,
            )
        ),

        value: $ => choice(
            $.identifier,
            $.string,
            $.date,
            $.keypath,
        ),

        identifier: $ => /[a-zA-Z_][a-zA-Z0-9-_.]*/,

        string: $ => seq(
            '"',
            /[^"]*/,
            '"',
        ),

        date: $ => /\d{4}-\d{2}-\d{2}/,

        keypath: $ => choice(
            $._absolute_keypath,
            $._relative_keypath,
        ),

        _relative_keypath: $ => seq($.node_identifier, $._absolute_keypath),
        _absolute_keypath: $ => repeat1(seq('/', $.node_identifier)),

        node_identifier: $ => seq(
            optional(seq($.identifier, token.immediate(":"))),
            $.identifier
        ),

        /*
         * Misc
         */

        _sep: $ => /\s+/,      // Separator
        _stmtend: $ => ';',    // End of statement

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
            'enum',
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
            'length',
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
            'range',
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
            'yang-version',
            'yin-element',
        )
    },
})
