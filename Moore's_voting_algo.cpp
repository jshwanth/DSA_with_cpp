#include <iostream>
#include <vector>
using namespace std;
int main()
{
    class Solution
    {
    public:
        int majorityElement(vector<int> &nums)
        {
            int count = 0, candidate = 0;
            for (int num : nums)
            {
                if (count == 0)
                    candidate = num;
                else
                {
                    count += (num == candidate) ? 1 : -1;
                }
                return candidate;
            }
            return 0;
        }
    };
}