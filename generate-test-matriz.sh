#!/bin/bash
N=2
echo $N > test1-matriz.in

# Matriz A
for ((i=0; i<N*N; i++)); do
    echo -n "$(( RANDOM % 10 )) "
    if (( (i+1) % N == 0 )); then echo; fi
done >> test1-matriz.in

# Matriz B
for ((i=0; i<N*N; i++)); do
    echo -n "$(( RANDOM % 10 )) "
    if (( (i+1) % N == 0 )); then echo; fi
done >> test1-matriz.in

# Operação aleatória
echo a >> test1-matriz.in  # Pode trocar por s ou m manualmente

