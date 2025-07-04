#!/bin/bash
N=$(( RANDOM % 10 + 1 ))
echo $N > tests/test1-vetor.in
for i in $(seq 1 $N); do
  echo -n "$(( RANDOM % 100 )) " >> tests/test1-vetor.in
done
echo >> tests/test1-vetor.in
