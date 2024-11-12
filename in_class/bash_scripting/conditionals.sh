#! /bin/bash

# This on expects you to pass two arguments:
# 1) A number
# 2) A string

if [ $1 -lt 10 ] && [ $1 -gt 0 ]
then
  echo "First argument is in the range (0,10)"
elif [ $1 -lt 10 ]
then
  echo "First argument is less than 10, but not more than 0"
elif [ $1 -gt 0 ]
then
  echo "First argument is more than 0, but not less than 10"
else
  echo "First argument is neither > 0 nor < 10"
fi

if [ -z $2 ] || [ $2 = "start" ]
then
  echo "Hit on second if!"
fi
