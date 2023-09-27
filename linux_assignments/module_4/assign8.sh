#!/bin/bash
if [ -e "$1" ]; then
    echo "File '$1' exists."
    
    # Check if the file is executable
    if [ -x "$1" ]; then
        echo "File '$1' is executable."
    else
        echo "File '$1' is not executable."
    fi
else
    echo "File '$1' does not exist."
fi
