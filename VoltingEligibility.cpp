#include <iostream>
using namespace std;
int main() {
    int age,getperson;
    cout << "Enter your age: ";
    getperson(cin,age);
    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    } else {
        cout << "You are allowed to vote after " << 18 - age << " years." << endl;
    }
    return 0;
}
