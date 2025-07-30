#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s)
{
//    Brute force
   
    int n = s.length();
    int maxlen = 0;
    for (int i = 0; i < n; i++)
    {
        int hash[256] = {0}; // ASCII character set
        for (int j = i; j < n; j++)
        {
            if (hash[s[j]] == 0)
            {
                hash[s[j]]++;
            }
            else
            {
                break; // Found a repeating character
            }
            maxlen = max(maxlen, j - i + 1);
        }
    }
    return maxlen;



    // sliding window approach
    int left = 0, right = 0;
    int maxlen = 0;
    unordered_map<char, int> charMap;

    while (right < n)
    {
        if (charMap.find(s[right]) == charMap.end())
        {
            charMap[s[right]] = right;
            maxlen = max(maxlen, right - left + 1);
            right++;
        }
        else
        {
            left = charMap[s[right]] + 1;
            charMap[s[right]] = right;
            right++;
        }
    }
    return maxlen;
}

int main()
{
    string s = "abcabcbb";
    int result = lengthOfLongestSubstring(s);
    cout << "Length of the longest substring without repeating characters: " << result << endl;
    return 0;
}