#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool divideArray(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        cout << "Sorted array: ";
        for (int num : nums) cout << num << " ";
        cout << "\n";

        for (int i = 0; i < nums.size(); i += 2) {
            cout << "Comparing nums[" << i << "] = " << nums[i]
                 << " and nums[" << i+1 << "] = " << nums[i+1] << "\n";

            if (nums[i] != nums[i + 1]) {
                cout << "Elements are not equal! Cannot divide.\n";
                return false;
            }
        }

        cout << "All pairs are equal. Division possible.\n";
        return true;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {3, 2, 3, 2, 2, 2};

    cout << "Original array: ";
    for (int num : nums) cout << num << " ";
    cout << "\n\n";

    bool result = sol.divideArray(nums);

    cout << "\nFinal Result: " << (result ? "true" : "false") << endl;

    return 0;
}
