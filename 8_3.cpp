#include <iostream>
using namespace std;

int main() {
    int rA, cA, rB, cB;

    cout << "Enter the number of rows for Matrix A: ";
    cin >> rA;
    cout << "Enter the number of columns for Matrix A: ";
    cin >> cA;
    cout << "Enter the number of rows for Matrix B: ";
    cin >> rB;
    cout << "Enter the number of columns for Matrix B: ";
    cin >> cB;

    if (cA!= rB) {
        cout << "Matrix multiplication is not possible. Number of columns in Matrix A must be equal to the number of rows in Matrix B." << endl;
        return 1;  
    }

    int mA[rA][cA], mB[rB][cB], product[rA][cB];

    cout << "Enter elements of Matrix A:" << endl;
    for (int i = 0; i < rA; i++) {
        for (int j = 0; j < cA; j++) {
            cin >> mA[i][j];
        }
    }

    cout << "Enter elements of Matrix B:" << endl;
    for (int i = 0; i < rB; i++) {
        for (int j = 0; j < cB; j++) {
            cin >> mB[i][j];
        }
    }

    for (int i = 0; i < rA; i++) {
        for (int j = 0; j < cB; j++) {
            product[i][j] = 0;
        }
    }

    for (int i = 0; i < rA; i++) {
        for (int j = 0; j < cB; j++) {
            for (int k = 0; k < cA; k++) {
                product[i][j] += mA[i][k] * mB[k][j];
            }
        }
    }

    cout << "Matrix A * Matrix B:" << endl;
    for (int i = 0; i < rA; i++) {
        for (int j = 0; j < cB; j++) {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
