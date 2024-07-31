#include <iostream>
using namespace std;

class ReverseNumber {
    int number;
public:
    ReverseNumber(int num) : number(num) {
        displayReverse();
    }

    void displayReverse() {
        int reverse = 0, temp = number;
        while (temp != 0) {
            int digit = temp % 10;
            reverse = reverse * 10 + digit;
            temp /= 10;
        }
        cout << "Reverse of " << number << " is " << reverse << endl;
    }
};

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    ReverseNumber reverse(num);

    return 0;
}
