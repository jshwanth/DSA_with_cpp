#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestOnes(vector<int> &nums, int k)
    {
        int l = 0, r = 0, zeroCOunt = 0, maxLength = 0;

        while (r < nums.size())
        {
            if (nums[r] == 0)
                zeroCOunt++;
            while (zeroCOunt > k)
            {
                if (nums[l] == 0)
                    zeroCOunt--;
                l++;
            }
            maxLength = max(maxLength, r - l + 1);
            r++;
        }
        return maxLength;
    }
};
int main()
{
    Solution sol;
    vector<int> nums = {1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0};
    int k = 2; // Maximum number of zeros we can flip
    int result = sol.longestOnes(nums, k);
    cout << "Maximum length of consecutive ones after flipping at most " << k << " zeros: " << result << endl;
    return 0;
}