#include <iostream>
#include <vector>
using namespace std;

int longestIncreasingSubsequence(vector<int>& nums) {
    if (nums.empty()) return 0;

    vector<int> lis(nums.size(), 1);
    int maxLen = 1;

    for (size_t i = 1; i < nums.size(); i++) {
        for (size_t j = 0; j < i; j++) {
            if (nums[i] > nums[j] && lis[i] < lis[j] + 1) {
                lis[i] = lis[j] + 1;
            }
        }
        maxLen = max(maxLen, lis[i]);
    }

    return maxLen;
}

int main() {
    vector<int> nums = {10, 22, 9, 33, 21, 50, 41, 60, 80};
    cout << "Length of longest increasing subsequence: " << longestIncreasingSubsequence(nums) << endl.;
    return 0;
}
