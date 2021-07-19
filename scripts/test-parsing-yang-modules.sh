#!/bin/bash

if [[ "$(find yang-models | wc -l)" -lt 10 ]]; then
    echo "yang-modules directory is empty, " \
         "please run scripts/update-yang-models.sh first" >&2
    exit
fi

TMPFILE="$(mktemp)"
trap "rm $TMPFILE" EXIT

find ./yang-models/standard -name "*.yang" > "$TMPFILE"

./node_modules/.bin/tree-sitter parse -qst --paths "$TMPFILE"
