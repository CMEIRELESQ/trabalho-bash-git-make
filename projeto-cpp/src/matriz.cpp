#include <iostream>
#include <vector>
#include "../include/matriz.hpp"

using namespace std;

void operarMatriz(vector<vector<int>>& A, vector<vector<int>>& B, char op) {
    int n = A.size();
    vector<vector<int>> C(n, vector<int>(n, 0));

    if (op == 'a') {
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                C[i][j] = A[i][j] + B[i][j];
    } else if (op == 's') {
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                C[i][j] = A[i][j] - B[i][j];
    } else if (op == 'm') {
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                for (int k = 0; k < n; ++k)
                    C[i][j] += A[i][k] * B[k][j];
    }

    for (const auto& row : C) {
        for (int val : row)
            cout << val << " ";
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> A(n, vector<int>(n)), B(n, vector<int>(n));
    for (auto& row : A)
        for (int& val : row)
            cin >> val;
    for (auto& row : B)
        for (int& val : row)
            cin >> val;
    char op;
    cin >> op;
    operarMatriz(A, B, op);
    return 0;
}
