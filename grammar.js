module.exports = grammar({
    name: "yang",

    word: $ => $.identifier,

    rules: {
        /*
         * Modules
         */

        module: $ => seq(
            'module',
            field('module_name', $.identifier),
            field('module_block', $.module_block),
        ),

        module_block: $ => seq(
            '{',
            repeat(
                choice(
                    $.yang_version_statement,
                    $.namespace_statement,
                    $.prefix_statement,
                ),
            ),
            '}',
        ),

        yang_version_statement: $ => seq(
            "yang-version", $.string, $._stmsep
        ),

        namespace_statement: $ => seq(
            "namespace", $.string, $._stmsep
        ),

        prefix_statement: $ => seq(
            "prefix", $.string, $._stmsep
        ),

        /*
         * Generic
         */

        identifier: $ => /[a-zA-Z_][a-zA-Z0-9-_.]*/,

        string: $ => seq(
            '"',
            /[^"]*/,
            '"',
        ),

        /*
         * Misc
         */

        _stmsep: $ => ';',   // Statement separator
    },
})
