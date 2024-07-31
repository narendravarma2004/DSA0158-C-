#include <iostream>
using namespace std;
int main() {
    int rowsA, colsA, rowsB, colsB;
    cout << "Enter the number of rows and columns for Matrix A: ";
    cin >> rowsA >> colsA;
    cout << "Enter the number of rows and columns for Matrix B: ";
    cin >> rowsB >> colsB;
    if (colsA != rowsB) {
        cout << "Matrix multiplication is not possible with these dimensions." << endl;
        return 1;
    }
    int** A = new int*[rowsA];
    int** B = new int*[rowsB];
    int** C = new int*[rowsA];
    for (int i = 0; i < rowsA; i++) {
        A[i] = new int[colsA];
    }
    for (int i = 0; i < rowsB; i++) {
        B[i] = new int[colsB];
    }
    for (int i = 0; i < rowsA; i++) {
        C[i] = new int[colsB];
    }
    cout << "Enter elements of Matrix A:" << endl;
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            cin >> A[i][j];
        }
    }
    cout << "Enter elements of Matrix B:" << endl;
    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < colsB; j++) {
            cin >> B[i][j];
        }
    }
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            C[i][j] = 0;
        }
    }
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            for (int k = 0; k < colsA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    cout << "Resultant Matrix C:" << endl;
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < rowsA; i++) {
        delete[] A[i];
    }
    delete[] A;

    for (int i = 0; i < rowsB; i++) {
        delete[] B[i];
    }
    delete[] B;

    for (int i = 0; i < rowsA; i++) {
        delete[] C[i];
    }
    delete[] C;

    return 0;
}
