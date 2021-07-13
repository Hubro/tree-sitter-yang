module.exports = grammar({
    name: "yang",

    rules: {
        /*
         * Modules
        */

        module: $ => seq(
            'module',
            $.identifier,
            $.module_block,
        ),

        module_block: $ => seq(
            '{',
            repeat(seq($.module_header_statement, ";")),
            '}',
        ),

        module_header_statement: $ => seq(
            choice(
                seq("yang-version", '"1.1"'),
            ),
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
    },
})
