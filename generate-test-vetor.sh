#!/bin/bash
N=$(( RANDOM % 10 + 1 ))
echo $N > test1-vetor.in
for ((i=0; i<N; i++)); do
    echo -n "$(( RANDOM % 100 )) "
done >> test1-vetor.in
echo >> test1-vetor.in

