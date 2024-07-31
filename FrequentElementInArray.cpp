#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int size;
    cout << "Enter size of the array: ";
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; ++i) {
        cout << "Enter Element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Entered Array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    unordered_map<int, int> frequency;
    int mostFrequentElement = arr[0];
    int maxCount = 1;
    for (int i = 0; i < size; ++i) {
        frequency[arr[i]]++;
        if (frequency[arr[i]] > maxCount) {
            maxCount = frequency[arr[i]];
            mostFrequentElement = arr[i];
        }
    }
    cout << "Most occurred number: " << mostFrequentElement << endl;
    return 0;
}
