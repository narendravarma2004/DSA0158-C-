#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Addition: " << (a + b) << endl;
    cout << "Subtraction: " << (a - b) << endl;
    cout << "Multiplication: " << (a * b) << endl;

    if (b != 0) {
        cout << "Division: " << (a / b) << endl;
        cout << "Modulo: " << (a % b) << endl;
    } else {
        cout << "Division and modulo by zero are undefined." << endl;
    }

    return 0;
}
