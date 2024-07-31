#include <iostream>
using namespace std;
double calculatearea(double length, double breadth) {
   cout << "Area of the rectangle: "<< length * breadth<<"\n";
}
double calculatearea(double radius) {
     cout << "Area of the circle: "<<(3.14 * radius * radius)<<"\n";
}
double calculatearea(double breadth,int eight){
      cout << "Area of the triangle: " << (0.5 *breadth * eight);
}
int main() {
    double length,breadth, radius, eight;
    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> breadth;
    calculatearea(length,breadth);
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    calculatearea(radius);
    cout << "Enter the base and height of the triangle: ";
    cin >> breadth >> eight;
    calculatearea(breadth,eight);
    return 0;
}
