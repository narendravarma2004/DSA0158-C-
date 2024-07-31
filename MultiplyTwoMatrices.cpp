#include <iostream>
using namespace std;

int main() {
    int rows1, cols1, rows2, cols2;
    cout << "Enter the number of rows and columns of first matrix: ";
    cin >> rows1 >> cols1;
    cout << "Enter the number of rows and columns of second matrix: ";
    cin >> rows2 >> cols2;

    if (cols1 != rows2) {
        cout << "Matrix multiplication not possible!" << endl;
        return 1;
    }

    int mat1[rows1][cols1], mat2[rows2][cols2], product[rows1][cols2];

    cout << "Enter elements of first matrix: " << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            cin >> mat1[i][j];
        }
    }

    cout << "Enter elements of second matrix: " << endl;
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            cin >> mat2[i][j];
        }
    }

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            product[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                product[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    cout << "Product of matrices: " << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
