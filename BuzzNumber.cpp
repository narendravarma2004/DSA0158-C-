#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    bool isBuzz = (num % 7 == 0) || (num % 10 == 7);

    if (isBuzz) {
        cout << num << " is a Buzz number." << endl;
    } else {
        cout << num << " is not a Buzz number." << endl;
    }

    return 0;
}
