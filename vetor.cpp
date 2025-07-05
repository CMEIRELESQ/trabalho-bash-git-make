#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> numeros(n);
    int soma = 0;
    int maior;

    for (int i = 0; i < n; i++) {
        cin >> numeros[i];
        soma += numeros[i];
        if (i == 0 || numeros[i] > maior) {
            maior = numeros[i];
        }
    }

    cout << "Maior: " << maior << endl;
    cout << "Soma: " << soma << endl;

    return 0;
}
