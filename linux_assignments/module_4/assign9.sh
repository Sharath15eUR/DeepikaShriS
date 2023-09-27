#!/bin/bash
n2="10"
read -p "Enter a number to check whether it is equal to 10: " n1
if [ "$n1" -ne "$n2" ]; then
    echo "The number is not equal to 10"
else
    echo "The number is equal to 10"
fi

