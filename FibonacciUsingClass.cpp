#include <iostream>
using namespace std;7
class Series {
public:
    int limit;
};
int main() {
    Series s;
    cout << "Enter the limit: ";
    cin >> s.limit;
    int a = 0, b = 1, next;
    for (int i = 0; i < s.limit; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = a + b;
            a = b;
            b = next;
        }
        cout << next << " ";
    }
    cout << endl;
    return 0;
}
