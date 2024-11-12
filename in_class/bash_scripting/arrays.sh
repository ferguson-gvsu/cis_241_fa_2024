#!/bin/bash

arr=(this is a test)
for var in ${arr[@]}
do
  echo $var
done

echo "Index 0 = ${arr[0]}"

arr_empty=()
arr_empty[0]=foo
arr_empty[1]=bar
arr_empty[3]=baz
echo "${!arr_empty[@]}"
arr_empty[2]=test
echo "${arr_empty[*]}"
echo "${!arr_empty[@]}"
echo "${arr_empty[@]:1:2}"

declare -a arr_declare
arr_declare+=2
arr_declare+=(4 6)
echo "${arr_declare[@]}"
echo "${!arr_declare[@]}"
echo "${#arr_declare[@]}"

declare -A dnd_stats
dnd_stats=(
  [str]=16
  [dex]=10
  [con]=18
  [int]=11
  [wis]=10
  [cha]=14
)
echo "${!dnd_stats[*]}"
echo "${dnd_stats[*]}"
for stat in ${!dnd_stats[@]}
do
  echo "${stat} = ${dnd_stats[$stat]}"
done
