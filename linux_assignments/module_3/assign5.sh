#!/bin/bash
declare -a fruit=('apple' 'orange' 'banana' 'kiwi' 'peach' 'jack' 'guava')
echo -e "Extracted three elements starting from index two: ${fruit[@]:2:5} \n "
fruit[3]='Debian'
echo -e "Elements after replacement: ${fruit[@]} \n"
fruit=("${fruit[@]}" "mango")
echo -e "Elements after appending: ${fruit[@]} \n"

