#include <iostream>
using namespace std;

bool ehPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

int main() {
    int n;
    cin >> n;
    if (ehPrimo(n)) cout << "Primo" << endl;
    else cout << "Não é primo" << endl;
    int quadrado;
    quadrado = n*n;
    cout << quadrado;
    return 0;
}
