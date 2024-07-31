#include <iostream>
using namespace std;

int main() {
    int n, pos;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the position to delete the element: ";
    cin >> pos;

    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    cout << "Array after deletion: ";
    for (int i = 0; i < n - 1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
