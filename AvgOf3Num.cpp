#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    cout << "Enter three integers: ";
    cin >> x >> y >> z;

    double average = (x + y + z) / 3.0;
    cout << "The average is: " << average << endl;

    return 0;
}
