#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool containsDup(vector<int> &nums)
    {
        unordered_map<int, int> mpp;
        for (int i : nums)
        {
            mpp[i]++;
        }
        for (auto p : mpp)
        {
            if (p.second > 1)
                return true;
        }
        return false;
    }
};
int main(){
    Solution obj;
    vector<int> nums = {1, 2, 3, 1};
    if (obj.containsDup(nums))
        cout << "Contains Duplicates";
    else
        cout << "No Duplicates";
    return 0;
}