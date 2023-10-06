#!/bin/bash
sumofN() {
    num=$1  
    temp=0
    if [ $num -eq 0 ]; then
        echo 0
    else
        temp=$(($num + $(sumofN $(($num - 1)))))
        echo $temp
    fi
}
read -p "Enter a number: " n
res=$(sumofN $n)

echo "Sum of first $n numbers is: $res"


