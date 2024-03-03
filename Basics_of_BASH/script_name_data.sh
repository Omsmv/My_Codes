#!/bin/bash

###########################

#taking name, roll number and date inputs from user

echo "Please input your first name:"
read nm

echo "Please input your roll number (XXXXX):"
read rn

echo "Please input today's date (YYYY-MM-DD):"
read dt

###########################

#creating directory with the name consisting of combination of the user data

mkdir ${nm}_${rn}_${dt}


cd ${nm}_${rn}_${dt}

###########################

#starting the scripting process inside the created folder

script ${nm}_${rn}_${dt}.txt
