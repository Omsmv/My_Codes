#!/bin/bash

for file in /home/iiserb/2021-22-I_EES445_GCC_Lab/Data/*.nc; do
	
	echo ""
	echo "The filename is ${file}"
	echo ""

	for operator in npar nyear nmon ndate ntime; do
		
		echo ""
		echo "The output of operator ${operator} is:"
		cdo -s ${operator} ${file}
	done
done
