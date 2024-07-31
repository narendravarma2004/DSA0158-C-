#include <iostream>
using namespace std;
int main() {
    double principal;
    int years;
    char senior;
    double interest;
    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Enter the number of years: ";
    cin >> years;
    cout << "Is customer a senior citizen (y/n): ";
    cin >> senior;
    if (senior == 'y' || senior == 'Y') {
        interest = principal * 0.12 * years;
    } else {
        interest = principal * 0.10 * years;
    }
    cout << "Interest: " << interest << endl;
    return 0;
}
