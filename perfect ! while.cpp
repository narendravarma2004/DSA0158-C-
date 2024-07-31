#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number to check if it is perfect: ";
    cin >> number;

    if (number <= 0) {
        cout << "Invalid input. Please enter a positive integer." << endl;
        return 1;
    }

    int sum = 0;
    int divisor = 1;

    while (divisor < number) {
        if (number % divisor == 0) {
            sum += divisor;
        }
        divisor++;
    }

    if (sum == number) {
        cout << number << " is a perfect number." << endl;
    } else {
        cout << number << " is not a perfect number." << endl;
    }

    return 0;
}
