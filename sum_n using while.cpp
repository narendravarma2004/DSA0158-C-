#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input for n. Please enter a positive integer." << endl;
        return 1;
    }

    int number, sum = 0, count = 0;
    cout << "Enter " << n << " numbers: ";

    while (count < n) {
        cin >> number;

        if (cin.fail()) {
            cout << "Invalid input for number. Please enter a valid integer." << endl;
            return 1;
        }

        sum += number;
        count++;
    }

    cout << "Sum: " << sum << endl;

    return 0;
}
