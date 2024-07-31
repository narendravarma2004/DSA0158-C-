#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the matrix: ";
    cin >> n;

    int mat[n][n];
    int primaryDiagonalSum = 0, secondaryDiagonalSum = 0;

    cout << "Enter elements of the matrix: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        primaryDiagonalSum += mat[i][i];
        secondaryDiagonalSum += mat[i][n - i - 1];
    }

    cout << "Sum of primary diagonal: " << primaryDiagonalSum << endl;
    cout << "Sum of secondary diagonal: " << secondaryDiagonalSum << endl;

    return 0;
}
