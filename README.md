# Exp-8
# Aim:
To study and implement C++ 2D array matrices.
# Theory:
The concept of 2D array matrices in C++ revolves around organizing data into a grid structure with rows and columns to allow for efficient access and manipulation. A 2D array can be viewed as an array of arrays, with each element accessed via a pair of indices (i, j) that represent its row and column positions. In memory, these arrays are stored in adjacent blocks in row-major order, which means that elements are stored one after another. This layout controls how quickly and efficiently data can be accessed and modified.

2D array operations include traversal (iterating through elements), matrix addition or subtraction by combining corresponding elements, and multiplication (summing the products of rows and columns from two matrices).To transpose a matrix, flip it over its diagonal, swapping the rows and columns.

While 2D arrays offer simplicity and direct indexing, they also have limitations such as fixed size constraints and the possibility of manual memory management errors. To overcome these constraints and improve functionality, standard libraries such as std::vector or specialized libraries such as Eigen can be employed. These theoretical foundations are required for using 2D arrays in real-world applications like mathematical computations, computer graphics, and data analysis.

CODES:

1. Entering Elements of a Matrix:
   ```
   #include <iostream>
   using namespace std;

   int main() {
    int temp[3][3], i, j, k, l;

    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cout << "Enter element (" << i << "," << j << "): ";
            cin >> temp[i][j];
        }
    }
    cout << "Entered Matrix:" << endl;
    for (k = 0; k < 3; k++) {
        for (l = 0; l < 3; l++) {
            cout << temp[k][l] << " ";
        }
        cout << endl;
    }

    return 0;
   }
   ```
   O/P:

   ![image](https://github.com/user-attachments/assets/04d23f4c-888c-4106-b4cd-df55edf1057f)

   2. Addition and Subtraction of Matrix:
  ```
#include <iostream>
using namespace std;

int main() {
    int r,c;

    
    cout << "Enter the number of rows: ";
    cin >> r;
    cout << "Enter the number of columns: ";
    cin >> c;

   
    int mA[r][c], mB[r][c], sum[r][c], diff[r][c];

   
    cout << "Enter elements of Matrix A:" << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> mA[i][j];
        }
    }

    cout << "Enter elements of Matrix B:" << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> mB[i][j];
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            sum[i][j] = mA[i][j] + mB[i][j];
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            diff[i][j] = mA[i][j] - mB[i][j];
        }
    }

    cout << "Matrix A + Matrix B:" << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Matrix A - Matrix B:" << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << diff[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}
```
O/P:

![image](https://github.com/user-attachments/assets/71eee363-7d7a-42b6-9aed-dfb213331e44)

3. Multiplication of Matrix:
```
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
```
O/P:

![image](https://github.com/user-attachments/assets/f8a9e07d-7763-43ff-b4d3-0afa6d19f275)




