#include <iostream>
using namespace std;

class PrimeSumChecker {
    int number;

    bool isPrime(int num) {
        if (num <= 1) return false;
        for (int i = 2; i <= num / 2; ++i) {
            if (num % i == 0) return false;
        }
        return true;
    }

public:
    PrimeSumChecker(int num) : number(num) {
        cout << "Constructor called." << endl;
    }

    ~PrimeSumChecker() {
        bool found = false;
        for (int i = 2; i <= number / 2; ++i) {
            if (isPrime(i) && isPrime(number - i)) {
                cout << number << " can be expressed as the sum of " << i << " and " << number - i << " (both prime numbers)." << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << number << " cannot be expressed as the sum of two prime numbers." << endl;
        }
        cout << "Destructor called." << endl;
    }
};

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    PrimeSumChecker checker(num);

    return 0;
}
