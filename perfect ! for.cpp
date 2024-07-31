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

    for (int i = 1; i < number; ++i) {
        if (number % i == 0) {
            sum += i;
        }
    }

    if (sum == number) {
        cout << number << " is a perfect number." << endl;
    } else {
        cout << number << " is not a perfect number." << endl;
    }

    return 0;
}
