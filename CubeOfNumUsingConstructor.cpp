#include <iostream>
using namespace std;

class Cube {
private:
    int number;

public:
    Cube(int n) : number(n) {}

    void displayCubes() {
        for (int i = 1; i <= number; i++) {
            cout << "Cube of " << i << " is " << i * i * i << endl;
        }
    }
};

int main() {
    int n;

    cout << "Enter an integer: ";
    cin >> n;

    Cube cube(n);
    cube.displayCubes();

    return 0;
}
