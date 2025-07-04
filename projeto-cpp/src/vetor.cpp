#include <iostream>
#include "../include/vetor.hpp"

int maiorValor(int n, int vetor[]) {
    int maior = vetor[0];
    for (int i = 1; i < n; ++i)
        if (vetor[i] > maior)
            maior = vetor[i];
    return maior;
}

int main() {
    int n;
    std::cin >> n;
    int vetor[n];
    for (int i = 0; i < n; ++i)
        std::cin >> vetor[i];
    std::cout << maiorValor(n, vetor) << std::endl;
    return 0;
}
