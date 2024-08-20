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
