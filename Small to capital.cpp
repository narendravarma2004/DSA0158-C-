#include <iostream>
#include <string>
using namespace std;
class StringConverter {
public:
string str;
    void toUpperCase() {
        for (int i = 0; i < str.length(); ++i) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - 32;
            }
        }
    }

    void toLowerCase() {
        for (int i = 0; i < str.length(); ++i) {
            if (str[i] >= 'A' && str[i] <= 'Z') {
                str[i] = str[i] + 32;
            }
        }
    }
};
int main() {
    StringConverter converter;
    cout << "Enter the string: ";
    getline(cin, converter.str);
    string originalString = converter.str;
    converter.toUpperCase();
    cout << "The string in upper case: " << converter.str<<"\n";
    converter.str = originalString;
    converter.toLowerCase();
    cout << "The string in lower case: " << converter.str;
    return 0;
}
