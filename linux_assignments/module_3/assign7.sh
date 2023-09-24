#!/bin/bash

N="3"
read -p "Enter a number: " num

if [ "$num" == "$N" ]; then
  echo "It is equal to 3"
elif [ "$num" -gt "$N" ]; then
  echo "Greater than 3"
elif [ "$num" -lt "$N" ]; then
  echo "Lesser than 3"
else
  echo "Nothing is entered"
fi



