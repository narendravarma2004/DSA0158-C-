#include <iostream>
using namespace std;
class FloydTriangle {
public:
    FloydTriangle(int n) {
        int num = 1;
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= i; ++j) {
                cout << num << " ";
                num++;
            }
            cout << endl;
        }
    }
    ~FloydTriangle() {
        cout << "Destructor called!" << endl;
    }
};
int main() {
    FloydTriangle ft(5);6
    return 0;
}
