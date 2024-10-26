#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        // Normalize k to be within the bounds of n
        k = k % n;
        if (k == 0) return; // No need to rotate if k is 0

        // Create a temporary array to store the rotated values
        vector<int> temp(n);

        // Copy the last k elements to the front of the temp array
        for (int i = 0; i < k; ++i) {
            temp[i] = nums[n - k + i];
        }

        // Copy the rest of the elements
        for (int i = 0; i < n - k; ++i) {
            temp[k + i] = nums[i];
        }

        // Copy the temp array back to nums
        nums = temp;
    }
};

// Example usage
int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    solution.rotate(nums, k);

    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}