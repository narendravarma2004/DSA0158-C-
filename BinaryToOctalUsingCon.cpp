#include <iostream>
#include <string>
using namespace std;
class BinaryToOctalConverter {
    string binary;
    int binaryToDecimal(const string &binary) {
        int decimal = 0;
        int base = 1;
        for (int i = binary.length() - 1; i >= 0; --i) {
            if (binary[i] == '1') {
                decimal += base;
            }
            base *= 2;
        }
        return decimal;
    }
    string decimalToOctal(int decimal) {
        string octal = "";
        while (decimal > 0) {
            octal = to_string(decimal % 8) + octal;
            decimal /= 8;
        }
        return octal;
    }
public:
    BinaryToOctalConverter(string bin) : binary(bin) {
        displayConversion();
    }
    void displayConversion() {
        int decimal = binaryToDecimal(binary);
        string octal = decimalToOctal(decimal);
        cout << "Binary: " << binary << endl;
        cout << "Octal: " << octal << endl;
    }
};
int main() {
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    BinaryToOctalConverter converter(binary);

    return 0;
}
