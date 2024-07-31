#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float num;
    cout << "Enter a floating-point number: ";
    cin >> num;
    cout << "Rounded using floor: " << floor(num) << endl;
    cout << "Rounded using ceil: " << ceil(num) << endl;
    return 0;
}