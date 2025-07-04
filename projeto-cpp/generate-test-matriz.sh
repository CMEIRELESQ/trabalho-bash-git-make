#!/bin/bash
N=2
echo $N > tests/test1-matriz.in
for i in $(seq 1 $((N*N))); do echo -n "$(( RANDOM % 10 )) " ; done | xargs -n $N >> tests/test1-matriz.in
for i in $(seq 1 $((N*N))); do echo -n "$(( RANDOM % 10 )) " ; done | xargs -n $N >> tests/test1-matriz.in
echo a >> tests/test1-matriz.in
