#include <bits/stdc++.h>
using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end()); // Sort the array
    int closestSum = nums[0] + nums[1] + nums[2]; // Initialize with first three numbers

    for (int i = 0; i < nums.size() - 2; i++) {
        int left = i + 1, right = nums.size() - 1;
        
        while (left < right) {
            int currentSum = nums[i] + nums[left] + nums[right];
            
            // If exactly equal to target, return immediately
            if (currentSum == target) return currentSum;

            // Update closest sum if the current sum is closer to target
            if (abs(target - currentSum) < abs(target - closestSum)) {
                closestSum = currentSum;
            }

            // Move pointers
            if (currentSum < target) {
                left++;  // Need a bigger sum
            } else {
                right--; // Need a smaller sum
            }
        }
    }
    return closestSum;
}

// Main function
int main() {
    int n, target;
    cin >> n; // Number of elements
    vector<int> nums(n);
    
    for (int i = 0; i < n; i++) cin >> nums[i]; // Input array
    cin >> target; // Target sum

    cout << threeSumClosest(nums, target) << endl;
    return 0;
}
