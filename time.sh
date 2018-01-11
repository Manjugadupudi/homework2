#!/bin/bash
i=2
while [[ i -le 10 ]]

do 
 ((N = 10**i))
 ((i = i + 1))
 /usr/bin/time -f "%e" ./hw2 $N >>time.dat 

done
