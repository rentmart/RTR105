#!/bin/bash

pwd >> log.txt 2>> error.txt
ls -l >> log.txt 2>> error.txt
mkdir ManaMape >> log.txt 2>> error.txt
echo "Hello\vWorld!!" >> z100.txt 2>> error.txt
cp z100.txt ManaMape/z200.txt >> log.txt 2>> error.txt
cat z100.txt >> loog.txt 2>> error.txt
rmdir ManaMape >> lot.txt 2>> error.txt
rm -r ManaMape >> log.txt 2>> error.txt
