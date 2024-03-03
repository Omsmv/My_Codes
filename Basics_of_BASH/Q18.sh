#!/bin/bash

for file in /home/iiserb/2021-22-I_EES445_GCC_Lab/Data/*.nc;
	do
	echo "Grid description of $file file:"
	echo cdo griddes $(file)
	done
