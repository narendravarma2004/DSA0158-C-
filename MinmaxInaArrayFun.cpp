#include <iostream>
#include <vector>
using namespace std;

pair<int, int> findMinMax(const vector<int>& arr) {
    int min = arr[0], max = arr[0];
    for (int num : arr) {
        if (num < min) min = num;
        if (num > max) max = num;
    }
    return {min, max};
}

int main() {
    vector<int> arr = {5, 2, 9, 1, 5, 6};
    auto [min, max] = findMinMax(arr);
    cout << "Minimum element: " << min << endl;
    cout << "Maximum element: " << max << endl;
    return 0;
}
