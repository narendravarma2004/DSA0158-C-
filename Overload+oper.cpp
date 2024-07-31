#include <iostream>
using namespace std;
class Add {
public:
    int value;
    Add(int v) : value(v) {}
    Add operator + (const Add& obj) {
        return Add(value + obj.value);
    }
};
int main() {
    Add a1(5), a2(10);
    Add a3 = a1 + a2;
    cout << "Sum: " << a3.value << endl;
    return 0;
}
