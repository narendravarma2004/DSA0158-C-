#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cout << "Enter the string: ";
    cin >> str;
    bool isPalindrome = true;
    int n = str.length();
    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - i - 1]) {
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome) {
        cout << "THE GIVEN STRING IS PALINDROME" << endl;
    } else {
        cout << "THE GIVEN STRING IS NOT PALINDROME" << endl;
    }
    return 0;
}
