#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        if (nums.size() == 0)
            return 0;
        int i = 0, j = 1;
        for (j = 1; j < nums.size(); j++)
        {
            if (nums[j] != nums[i])
            {
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 1, 2, 3, 3, 4, 5, 5, 6};

    // Step to print duplicates
    unordered_set<int> seen;
    cout << "Duplicates in the array: ";
    for (int num : nums) {
        if (seen.find(num) != seen.end()) {
            cout << num << " ";
        } else {
            seen.insert(num);
        }
    }
    cout << endl;

    // Remove duplicates
    int newSize = solution.removeDuplicates(nums);

    // Print the results
    cout << "The new size of the array is: " << newSize << endl;
    cout << "The modified array is: ";
    for (int i = 0; i < newSize; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}