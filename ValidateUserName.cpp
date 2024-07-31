#include <iostream>
#include <string>
using namespace std;

int main() {
    string userName1, userName2;
    cout << "Enter the user name: ";
    cin >> userName1;
    cout << "Reenter the user name: ";
    cin >> userName2;

    if (userName1 == userName2) {
        cout << "User name is valid." << endl;
    } else {
        cout << "User name is invalid." << endl;
    }

    return 0;
}
