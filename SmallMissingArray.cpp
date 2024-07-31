#include <iostream>
using namespace std;
int main() {
    int arr[] = {0, 1, 2, 3, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    while (i < size) {
        if (arr[i] != i) {
            cout << "The smallest missing element is " << i << endl;
            return 0;
        }
        i++;
    }
    cout << "No element is missing in the range 0 to " << size - 1 << endl;
    return 0;
}