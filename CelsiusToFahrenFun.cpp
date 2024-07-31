#include <iostream>
using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9/5) + 32;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

int main() {
    double temp;
    char unit;
    cout << "Enter temperature followed by unit (C/F): ";
    cin >> temp >> unit;

    if (unit == 'C' || unit == 'c') {
        cout << temp << " Celsius is " << celsiusToFahrenheit(temp) << " Fahrenheit." << endl;
    } else if (unit == 'F' || unit == 'f') {
        cout << temp << " Fahrenheit is " << fahrenheitToCelsius(temp) << " Celsius." << endl;
    } else {
        cout << "Invalid unit!" << endl;
    }
    return 0;
}
