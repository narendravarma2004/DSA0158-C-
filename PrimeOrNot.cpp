#include <iostream>
#include <cmath>
using namespace std;
int main() {
    cout << "Enter a number: ";
    int num, fact = 0;
    cin >> num;
    if (num <= 1) {
        cout << num << " is not prime\n";
    } else {
        for (int i = 1; i <= sqrt(num); i++) {
            if (num % i == 0) {
                fact++;
                if (i != num / i) {
                    fact++;
                }
            }
        }
        if (fact == 2) {
            cout << num << " is prime";
        } else {
            cout << num << " is not prime";
        }
    }
    return 0;
}
