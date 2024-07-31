#include <iostream>
using namespace std;

class Increment {
private:
    int value;

public:
    Increment(int v) : value(v) {}

    // Overload the prefix ++ operator
    Increment& operator++() {
        ++value;
        return *this;
    }

    // Overload the postfix ++ operator
    Increment operator++(int) {
        Increment temp = *this;
        value++;
        return temp;
    }

    int getValue() const {
        return value;
    }
};

int main() {
    Increment obj(5);

    cout << "Initial value: " << obj.getValue() << endl;

    ++obj;
    cout << "After prefix ++: " << obj.getValue() << endl;

    obj++;
    cout << "After postfix ++: " << obj.getValue() << endl;

    return 0;
}
