#include <iostream>
using namespace std;

class TrianglePattern {
    int n;
public:
    TrianglePattern(int num) : n(num) {
        displayPattern();
    }

    void displayPattern() {
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= i; ++j) {
                cout << i << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    TrianglePattern pattern(num);

    return 0;
}
