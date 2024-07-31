#include <iostream>
using namespace std;
double calculatearea(double length = 4.0, double breadth = 2.0) {
    return length * breadth;
}
int main() {
    double length,breadth;
    cout << "Enter the length and breadth of the rectangle: ";
    cin >> length>>breadth;
    cout << "Area" << calculatearea(length,breadth);
    return 0;
}
