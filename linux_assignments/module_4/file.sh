#!/usr/bin/env bash
exec 3> output.txt
echo "Newly added text" >&3
date >&3
exec 3<&-
exec 3< <(cat)

# Display the contents of the file in the terminal
cat <&3

# Close the file descriptor
exec 3<&-




