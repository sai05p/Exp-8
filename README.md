# Exp-8
# Aim:
To study and implement C++ 2D array matrices.
# Software Used
Visual Studio Code
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

4. Diagonal addition of Matrix:
```
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of the matrix: ";
    cin >> n;

    int matrix[n][n];

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int sum = 0;

    // Calculate the sum of the primary diagonal
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    cout << "Sum of the diagonal elements: " << sum << endl;

    return 0;
}
```
O/P:

![image](https://github.com/user-attachments/assets/20286f13-b37a-4cc5-8571-60ede49bd2b4)

5. Transpose of Matrix:
```
#include <iostream>
using namespace std;

int main() {
    int r,c;

    cout << "Enter the number of rows: ";
    cin >>r;
    cout << "Enter the number of columns: ";
    cin >>c;

    int matrix[r][c], transpose[c][r];

    cout << "Enter the elements of the matrix:" << endl;
    for (int i=0; i<r;i++) {
        for (int j=0;j<c;j++) {
            cin>>matrix[i][j];
        }
    }
    for (int i=0; i<r;i++) {
        for (int j=0;j<c;j++) {
            transpose[j][i]=matrix[i][j];
        }
    }
    cout<<"Transpose of the matrix:"<<endl;
    for (int i=0;i<c;i++) {
        for (int j=0;j<r;j++) {
            cout<<transpose[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
```
O/P:

![image](https://github.com/user-attachments/assets/cd45dd8b-8aac-4d39-8fb9-9bb620ca7470)

# Conclusion:

This experiment teaches fundamental programming concepts, specifically how to work with data structures that require multidimensional organization.

Efficiently Store and Manipulate Data: Using 2D arrays allows us to store data in a tabular format, making matrix addition, subtraction, and multiplication easier.

Develop Problem-Solving Skills: Implementing matrix operations requires careful consideration of indices, loops, and data handling, which improves logical thinking and problem-solving abilities. Understand Memory Management: Working with 2D arrays in C++ teaches you how memory is allocated and accessed in programming, especially when dealing with rows and columns of data.

Apply concepts in real-world scenarios: Matrix operations are essential in a variety of fields, including engineering, computer graphics, machine learning, and scientific computing. Understanding how to implement these in C++ allows us to address more complex issues in these areas.







