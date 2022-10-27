#!/bin/bash
if ! [ -d "./.temp/" ]; then
    mkdir ./.temp
fi
g++ main.cpp  -o .temp/run -lm

size=$(find "./.temp/run" -printf "%s")
echo "Compiled file size ($((size/1000)) Kb)".

sleep 1

./.temp/run