#include <iostream>
using namespace std;

int countElements(string str) {
    return str.length();
}

int main() {
    string str = "Hello, World!";
    cout << "Number of elements in the string: " << countElements(str) << endl;
    return 0;
}
