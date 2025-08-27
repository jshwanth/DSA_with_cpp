#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < n - 3; ++i) {
            if (i > 0 && nums[i] == nums[i - 1]) continue; // Skip duplicates
            for (int j = i + 1; j < n - 2; ++j) {
                if (j > i + 1 && nums[j] == nums[j - 1]) continue; // Skip duplicates
                int left = j + 1, right = n - 1;
                while (left < right) {
                    long long sum = (long long)nums[i] + nums[j] + nums[left] + nums[right];
                    if (sum == target) {
                        result.push_back({nums[i], nums[j], nums[left], nums[right]});
                        while (left < right && nums[left] == nums[left + 1]) ++left; // Skip duplicates
                        while (left < right && nums[right] == nums[right - 1]) --right; // Skip duplicates
                        ++left; --right;
                    } else if (sum < target) {
                        ++left; // Increase the sum
                    } else {
                        --right; // Decrease the sum
                    }
                }
            }
        }
        return result;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;
    
    vector<vector<int>> result = solution.fourSum(nums, target);
    
    for (const auto& quadruplet : result) {
        for (int num : quadruplet) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
