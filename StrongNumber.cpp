#include <iostream>
using namespace std;

int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, sum = 0, temp;
    cout << "Enter an integer: ";
    cin >> num;

    temp = num;
    while (temp != 0) {
        sum += factorial(temp % 10);
        temp /= 10;
    }

    if (sum == num) {
        cout<< num << " is a Strong number." << endl;
} else {
cout << num << " is not a Strong number." << endl;
}
return 0;
