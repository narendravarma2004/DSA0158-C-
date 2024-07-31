#include <iostream>
using namespace std;

class DivisibleByNine {
    int count;
    int sum;

public:
    DivisibleByNine() : count(0), sum(0) {
        cout << "Constructor called." << endl;
        findNumbers();
    }

    ~DivisibleByNine() {
        cout << "Destructor called." << endl;
        displayResults();
    }

    void findNumbers() {
        for (int i = 100; i <= 200; ++i) {
            if (i % 9 == 0) {
                count++;
                sum += i;
            }
        }
    }

    void displayResults() {
        cout << "Number of integers between 100 and 200 that are divisible by 9: " << count << endl;
        cout << "Sum of these integers: " << sum << endl;
    }
};

int main() {
    DivisibleByNine result;
    return 0;
}
