#include <iostream>
using namespace std;

class SeriesSum {
    int n;
public:
    SeriesSum(int num) : n(num) {
        displaySum();
    }

    void displaySum() {
        int sum = 0;
        for (int i = 1; i <= n; ++i) {
            sum += i;
        }
        cout << "Sum of the series up to " << n << " is " << sum << endl;
    }
};

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    SeriesSum sum(num);

    return 0;
}
