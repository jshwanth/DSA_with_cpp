#include <iostream>
#include <string>

using namespace std; // Use the standard namespace

class Solution
{
public:
    string reverseWords(string s)
    {
        int left = 0;
        int right = s.length() - 1;
        string temp = "";
        string ans = "";

        while (left <= right && s[left] == ' ')
            left++;
        while (right >= left && s[right] == ' ')
            right--;

        while (left <= right)
        {
            char ch = s[left];
            if (ch != ' ')
            {
                temp += ch;
            }
            else if (!temp.empty())
            {
                if (!ans.empty())
                    ans = " " + ans;
                ans = temp + ans;
                temp = "";
            }
            left++;
        }

        if (!temp.empty())
        {
            if (!ans.empty())
                ans = " " + ans;
            ans = temp + ans;
        }

        return ans;
    }
};

int main()
{
    Solution solution;

    // Test cases
    string test1 = "the sky is blue";
    string test2 = "  hello world  ";

    cout << "Input: \"" << test1 << "\" Output: \"" << solution.reverseWords(test1) << "\"" << endl;
    cout << "Input: \"" << test2 << "\" Output: \"" << solution.reverseWords(test2) << "\"" << endl;

    return 0;
}