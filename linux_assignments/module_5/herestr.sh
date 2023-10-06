#!/bin/bash

input_string="uppercase"

output_string=$(echo "$input_string" | tr 'a-z' 'A-Z')

echo "Uppercase string using Here String: $output_string"

