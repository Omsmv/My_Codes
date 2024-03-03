#!/bin/bash

#taking user input

echo "Enter start value:"
read start

echo "Enter end value:"
read end

echo "Enter increment value:"
read inc

#processing of input

if [ $start -le $end ]; then
	for i in $(seq $start $inc $end); do
		echo $i 
	done
else
	echo 'Invalid input: Start value should be less than end value. Try again!'  #error detection
fi
