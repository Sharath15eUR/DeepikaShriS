#!/bin/bash

read -p "Enter username: " username
if [ "$username" == "$USER" ]; then
  echo "Hello"
else
  echo "Try again"
fi

