#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    int mat1[rows][cols], mat2[rows][cols], sum[rows][cols];

    cout << "Enter elements of first matrix: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> mat1[i][j];
        }
    }

    cout << "Enter elements of second matrix: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> mat2[i][j];
        }
    }

    cout << "Sum of matrices: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
