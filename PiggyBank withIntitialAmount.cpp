#include <iostream>
using namespace std;
class AddAmount {
public:
    int amount;
    AddAmount() {
        amount = 50;
    }
    AddAmount(int addedAmount) {
        amount = 50 + addedAmount;
    }
};
int main() {
    int addedAmount;
    cout << "Enter the amount to add: ";
    cin >> addedAmount;
    AddAmount a1;
    AddAmount a2(addedAmount);
    cout << "Final amount without adding: " << a1.amount << endl;
    cout << "Final amount after adding: " << a2.amount << endl;
    return 0;
}
