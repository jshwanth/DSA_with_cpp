#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void bookAllocation(vector<int> &nums)
    {
        int n = nums.size();
        int max = 0;
        for (int i = 0; i < n; i++)
        {
            max = max > nums[i] ? max : nums[i];
        }
        int k = max;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == k)
            {
                count++;
            }
        }
        if (count > 1)
        {
            cout << "NO" << endl;
            return;
        }
    }
};
int main()
{
    vector<int> nums = { 1, 2, 3, 4, 5 };
    cout << "YES" << endl;
    return 0;
}
