#!/bin/bash
if [ -r "$1" ]; then
    echo "$1 is readable."
else
    echo "$1 is not readable."
fi 
    
if [ -x "$1" ]; then
    echo "$1 is executable."
else
    echo "$1 is not executable."
 fi
    
if [ -o "$1" ]; then
    echo "You are the owner of $1"
else
    echo "You are not the owner of $1"
fi
