#include <iostream>
#include "../include/primo.hpp"

bool ehPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0)
            return false;
    return true;
}

int main() {
    int n;
    std::cin >> n;
    std::cout << (ehPrimo(n) ? "Primo" : "Não é primo") << std::endl;
    return 0;
}
