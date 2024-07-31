#include <iostream>
using namespace std;

class Rectangle {
public:
    int length;
    int breadth;

    Rectangle() {
        length = 0;
        breadth = 0;
    }

    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    Rectangle(int side) {
        length = side;
        breadth = side;
    }

    int area() {
        return length * breadth;
    }
};

int main() {
    Rectangle r1;
    Rectangle r2(3, 3);
    Rectangle r3(3);

    cout << "Area: " << r1.area() << endl;
    cout << "Area: " << r2.area() << endl;
    cout << "Area: " << r3.area() << endl;

    return 0;
}
