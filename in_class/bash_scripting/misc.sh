#! /bin/bash

secret_num=7

echo "The secret number is: $secret_num"
echo "Double the secret num is $(( secret_num * 2 ))"

COND=1
if [ $1 -lt 10 ] && [ $1 -gt 0 ]
then
  echo "Hit!"
fi

if (( $1 < 10 ))
then
  echo "Hit (math)!"
fi

for var in 1 2 3 4 5
do
  echo "Var is $var"
done

echo " "
for var in 1 2 3 "a" "b" "c"
do
  echo "Var is $var"
done

echo " "
for var in {0..10..2}
do
  echo "Var is $var"
done


echo "starts here "
for var
do
  echo "Var is $var"
done

var1=ls
var2=$(ls)
echo "Var1: $var1"
echo "Var2: $var2"

for i in $(seq 0 10)
do
  echo "i = $i"
done

echo "while zone"

i=-5
while [ $i -lt 10 ]
do
  echo "i = $i"
  i=$((i+1))
done

echo "Array zone"
arr=(10 53 70)
arr[0]=35
arr+=(900 1800 2700)
echo "${arr[1]}"
echo "${arr[@]}"




















