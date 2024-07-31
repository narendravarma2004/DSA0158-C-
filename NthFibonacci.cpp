#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the position of the Fibonacci number you want to find: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer greater than zero." << endl;
    } else if (n == 1) {
        cout << "The 1st Fibonacci number is 0." << endl;
    } else if (n == 2) {
        cout << "The 2nd Fibonacci number is 1." << endl;
    } else {
        int a = 0, b = 1, fib = 0;
        for (int i = 3; i <= n; ++i) {
            fib = a + b;
            a = b;
            b = fib;
        }
        cout << "The " << n << "th Fibonacci number is " << fib << "." << endl;
    }

    return 0;
}
