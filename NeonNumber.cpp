#include <iostream>
using namespace std;
int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    int square = num * num;
    if (num == sumOfDigits(square)) {
        cout << num << " is a Neon number." << endl;
    } else {
        cout << num << " is not a Neon number." << endl;
    }
    return 0;
}
