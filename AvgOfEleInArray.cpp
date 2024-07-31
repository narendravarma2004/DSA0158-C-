#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n], sum = 0;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    double average = static_cast<double>(sum) / n;
    cout << "Average of all elements: " << average << endl;

    return 0;
}
