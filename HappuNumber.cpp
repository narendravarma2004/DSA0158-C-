#include <iostream>
#include <unordered_set>
using namespace std;
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    unordered_set<int> seen;
    int current = num;
    while (current != 1 && seen.find(current) == seen.end()) {
        seen.insert(current);
        int next = 0;
        while (current > 0) {
            int digit = current % 10;
            next += digit * digit;
            current /= 10;
        }
        current = next;
    }
    if (current == 1) {
        cout << num << " is a happy number." << endl;
    } else {
        cout << num << " is not a happy number." << endl;
    }

    return 0;
}
