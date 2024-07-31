#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the position of the Fibonacci number: ";
    cin >> n;
    int a = 0, b = 1, fibonacci;
    if (n == 1) {
        fibonacci = a;
    }
    else if (n == 2) {
        fibonacci = b;
    }
    else {
        for (int i = 3; i <= n; ++i) {
            fibonacci = a + b;
            a = b;
            b = fibonacci;
        }
    }
    cout << "The " << n << "th Fibonacci number is " << fibonacci << endl;
    return 0;
}
