#include <iostream>
using namespace std;

int main() {
    int intNum;
    float floatNum;

    cout << "Enter an integer: ";
    cin >> intNum;
    cout << "Enter a float: ";
    cin >> floatNum;

    if (intNum != 0) {
        float result = floatNum / intNum;
        cout << "Result of division: " << result << endl;
    } else {
        cout << "Division by zero is not allowed." << endl;
    }

    return 0;
}
