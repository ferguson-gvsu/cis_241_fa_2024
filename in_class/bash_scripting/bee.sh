#! /bin/bash

script=$(cat bee.txt)
echo "$script"
./function.sh "${script}" 2

