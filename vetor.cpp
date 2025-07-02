#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int maior, x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (i == 0 || x > maior) maior = x;
    }
    cout << maior << endl;
    return 0;
}
