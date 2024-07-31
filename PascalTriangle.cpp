#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                cout << "1 ";
            } else {
                // Compute binomial coefficient
                int value = 1;
                for (int k = 0; k < j; k++) {
                    value = value * (i - k) / (k + 1);
                }
                cout << value << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
