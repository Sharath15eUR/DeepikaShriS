#!/bin/bash

input_string="uppercase!"

output_string=$(tr 'a-z' 'A-Z' <<< "$input_string")

echo "Uppercase string using Here Document: $output_string"

