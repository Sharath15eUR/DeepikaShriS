#!/bin/bash

is_prime() 
{
  if [ $1 -le 1 ]; then
    return 1
  fi

  for ((i = 2; (i * i) <= $1; i++)); do
    if [ $(( $1 % $i )) -eq 0 ]; then
      return 1
    fi
  done

  return 0
}

sum_of_primes() 
{
  local n=$1
  local sum=0

  for ((num = 2; num <= n; num++)); do
    if is_prime $num; then
      sum=$((sum + num))
    fi
  done

  echo $sum
}

read -p "Enter a number: " n

result=$(sum_of_primes $n)
echo "The sum of prime numbers up to $n is: $result"

