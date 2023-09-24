#!/bin/bash
declare -a fruit=('orange' 'apple' 'kiwi' 'peach' 'jack' 'guava' 'banana')
echo -e "Total number of elements in the array Fruits: ${#fruit[@]} \n"
echo -e "The elements of the array are: ${fruit[@]} \n"
echo -e "The 5th element in the array is : ${fruit[4]} \n"
