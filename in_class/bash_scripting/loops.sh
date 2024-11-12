#! /bin/bash

for val in 0 1 2 3 4 5
do
  echo "Val: $val"
done

echo ""
for val in "a" "b" "c" "d" "e"
do
  echo "Val: $val"
done

echo ""
for val in {0..10..2}
do
  echo "Val: $val"
done

echo ""
for val in $(seq 0 10)
do
  echo "Val: $val"
done

range=$(seq 10 10 100)
echo ""
for val in $range
do
  echo "Val: $val"
done

i=0
while [ $i -lt 10 ]
do
  echo "while i = $i"
  i=$(( i+1 ))
done

for val 
do
  echo "$val"
done

echo "---"
for val in $*
do
  echo "$val"
done
