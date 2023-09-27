#!/usr/bin/env bash
find . -type d -name 'test*' | while read -r dir; do
  echo "Files in $dir directory"
  echo ""
  ls -1 "$dir" | while read -r file; do
    echo "$file"
  done

  echo "-----------------------"
done

