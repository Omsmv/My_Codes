#!/bin/bash

echo "Input the start value: "
read start_value

####################################

echo "Input the end value: "
read end_value

####################################

if [ $start_value >= $end_value ]
then
	echo "Warning: Invalid input! Start value should be less than end value. Try again!!"
else
	echo "Input the increment value: "
	read increment_value
fi

#####################################

list = seq $start_value $end_value $increment_value

for i in list
do
	echo $i
done
