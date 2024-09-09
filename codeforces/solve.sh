#!/bin/sh

file=$1
file_short="${file%.*}"
gcc "$file" -o "$file_short"
echo "compiled successfully"

./"$file_short"
rm "$file_short"
