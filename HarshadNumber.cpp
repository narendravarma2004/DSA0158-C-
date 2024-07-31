#include <iostream>
using namespace std;
int main() {
    int num, sum = 0, temp;
    cout << "Enter an integer: ";
    cin >> num;
    temp = num;
    while (temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }
    if (num % sum == 0) {
        cout << num << " is a Harshad number." << endl;
    } else {
        cout << num << " is not a Harshad number." << endl;
    }
    return 0;
}
