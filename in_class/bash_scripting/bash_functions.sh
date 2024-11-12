#! /bin/bash

function calc_exp() {
  echo "$1 was passed"
  local var=$1
  echo "Printing sequence for $var"
  echo "$((var))"
  echo "$((var * var))"
  echo "$((var * var * var))"
  echo "$((var * var * var * var))"
}

var=2
calc_exp 1
calc_exp 10
echo "var is $var"
calc_exp 3
calc_exp 4
calc_exp 5
