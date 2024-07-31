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

    do {
        cout << "Enter number " << count + 1 << ": ";
        cin >> number;

        if (cin.fail()) {
            cout << "Invalid input for number. Please enter a valid integer." << endl;
            return 1;
        }

        sum += number;
        count++;
    } while (count < n);

    cout << "Sum: " << sum << endl;

    return 0;
}
