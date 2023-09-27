#!/bin/bash
read -p "Enter two numbers: " n1 n2
read -p "Enter the operation :" o
case $o in 
+) echo "$(($n1+$n2))"
;;
-) echo "$(($n1-$n2))"
;;
\*) echo "$(($n1*$n2))"
;;
 /) 
 if [ "$n2" -eq 0 ]; then
      echo "Division by zero is not allowed."
      exit 1
    fi
    echo "scale=2; $n1 / $n2" | bc 
    ;;
*)
echo "Invalid operation"
;;
esac

