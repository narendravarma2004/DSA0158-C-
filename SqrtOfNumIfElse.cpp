#include <iostream>
using namespace std;
int main() {
    int number, i = 0;
    cout << "Enter a number: ";
    cin >> number;
    if (number < 0) {
        cout << "Invalid input. Enter a non-negative number." << endl;
        return 1;
    }
    while (i * i <= number) {
        if (i * i == number) {
            cout << "The square root of " << number << " is " << i << endl;
            return 0;
        }
        i++;
    }
    cout << "The number is not a perfect square." << endl;
    return 0;
}
