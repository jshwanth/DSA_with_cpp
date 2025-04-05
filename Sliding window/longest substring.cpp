#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int n = s.length();
        int maxLen = 0;
        int hash[256] = {0};
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                if (hash[s[j]] == 1)
                    break;
                hash[s[j]] = 1;
                maxLen = max(maxLen, j - i + 1);
            }
        }
        return maxLen;
    }
};
int main()
{
    Solution solution;
    string s = "pwwkew";
    int result = solution.lengthOfLongestSubstring(s);
    cout << "The length of the longest substring without repeating characters is: " << result << endl;
    return 0;
}