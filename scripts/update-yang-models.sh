#!/bin/bash

rm -rf yang-models

git clone --depth=1 https://github.com/YangModels/yang yang-models

# Patch up faulty models.
patch -dyang-models -p1 < scripts/fix-bad-patterns.patch

touch yang-models/.gitkeep
