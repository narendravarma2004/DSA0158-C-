#include <iostream>
using namespace std;

class Shape {
protected:
    double length;
    double width;
};

class Rectangle : public Shape {
public:
    void setDimensions(double l, double w) {
        length = l;
        width = w;
    }

    double area() {
        return length * width;
    }
};

class Cuboid : public Rectangle {
private:
    double height;

public:
    void setHeight(double h) {
        height = h;
    }

    double volume() {
        return length * width * height;
    }

    void display() {
        cout << "Area: " << area() << endl;
        cout << "Volume: " << volume() << endl;
    }
};

int main() {
    Cuboid cuboid;
    double l, w, h;

    cout << "Enter length, width, and height of the cuboid: ";
    cin >> l >> w >> h;

    cuboid.setDimensions(l, w);
    cuboid.setHeight(h);

    cuboid.display();

    return 0;
}
