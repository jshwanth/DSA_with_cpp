// Leetcode 46
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void backtrack(vector<int> &nums, vector<vector<int>> &result, int start)
    {
        if (start == nums.size() - 1)
        {
            result.push_back(nums); // Add the current permutation to the result
            return;
        }

        for (int i = start; i < nums.size(); ++i)
        {
            swap(nums[start], nums[i]);         // Swap to place nums[i] at the current position
            backtrack(nums, result, start + 1); // Generate permutations for the next positions
            swap(nums[start], nums[i]);         // Backtrack to restore the original state
        }
    }

    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> result;
        backtrack(nums, result, 0); // Start generating permutations from index 0
        return result;              // Correctly return the result vector
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> result = solution.permute(nums);
    for (const auto &perm : result)
    {
        for (int num : perm)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}