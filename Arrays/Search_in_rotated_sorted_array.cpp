#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        if (nums.empty())
            return -1; // Return -1 if the array is empty

        int left = 0, right = nums.size() - 1;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;

            // Check if we found the target
            if (nums.at(mid) == target) // Using at() for bounds checking
                return mid;

            // Determine which side is sorted
            if (nums.at(left) <= nums.at(mid)) // Left side is sorted
            {
                // Check if target is in the sorted left side
                if (nums.at(left) <= target && target < nums.at(mid))
                    right = mid - 1; // Target is in the left side
                else
                    left = mid + 1; // Target is in the right side
            }
            else // Right side is sorted
            {
                // Check if target is in the sorted right side
                if (nums.at(mid) < target && target <= nums.at(right))
                    left = mid + 1; // Target is in the right side
                else
                    right = mid - 1; // Target is in the left side
            }
        }

        return -1; // Target not found
    }
};

int main() {
    Solution solution;

    // Example rotated sorted array
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;

    int result = solution.search(nums, target);

    if (result != -1)
        cout << "Target found at index: " << result << endl;
    else
        cout << "Target not found in the array." << endl;

    return 0;
}