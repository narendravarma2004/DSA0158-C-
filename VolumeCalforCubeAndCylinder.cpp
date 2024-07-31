#include <iostream>
using namespace std;
class Volume {
public:
    Volume(int side) {
        cout << side * side * side << "\n";
    }
    Volume(double radius, double height) {
        cout << 3.14 * radius * radius * height << endl;
    }
};
int main() {
    Volume v1(3);
    Volume v2(3.0, 7.0);
    return 0;
}
