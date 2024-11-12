#! /bin/bash

echo "You passed me $1"

echo "You also passed $2"

echo "dollar sign 0 = $0"

echo "You passed me $# arguments"

echo "You passed me $*"

age=56

echo "Your age is $age"

text=Amazing

text2="This is great"

echo "$text"
echo "$text2"
filename=foo.txt
echo "${filename}_backup"

echo "Double quotes: $age"
echo 'Single quotes: $age'

echo "Old age: $age"
age=$(( $age + 1 ))
echo "New age: $age"













