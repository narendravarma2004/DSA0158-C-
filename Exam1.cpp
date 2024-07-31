#include <iostream>
#include <cmath>
using namespace std;
int main() {
    cout << "Enter a number: ";
    int num;
    cin >> num;
        bool isPrime = true;
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << num << " The number is prime";
        } else {
            cout << num << " The numberis not prime";
        } 
    return 0;
}