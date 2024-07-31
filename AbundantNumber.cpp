#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cout << "Enter an integer: ";
    cin >> num;

    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum > num) {
        cout << num << " is an Abundant number." << endl;
    } else {
        cout << num << " is not an Abundant number." << endl;
    }

    return 0;
}
