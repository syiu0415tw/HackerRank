#!/bin/bash
read N
# Calculate summation of N integers
for (( i=1; i<=N; i++ ))
do
    read tmp
    sum=$(($sum+$tmp))
done
# Display average of N integers
# Rounded off to three decimal places
printf "%.3f\n" `echo "scale=4; $sum/$N" | bc`
