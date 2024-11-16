#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        if (s.length() != t.length())
            return false;

        vector<int> mapS(256, -1);
        vector<int> mapT(256, -1);
        for (int i = 0; i < s.length(); i++)
        {
            char c1 = s[i];
            char c2 = t[i];
            if (mapS[c1] != mapT[c2])
                return false;
            mapS[c1] = i;
            mapT[c2] = i;
        }
        return true;
    }
};

int main()
{
    Solution solution;

    // Example 1
    string s1 = "egg";
    string t1 = "add";
    cout << "Is \"" << s1 << "\" isomorphic to \"" << t1 << "\"? "
         << (solution.isIsomorphic(s1, t1) ? "Yes" : "No") << endl;

    // Example 2
    string s2 = "foo";
    string t2 = "bar";
    cout << "Is \"" << s2 << "\" isomorphic to \"" << t2 << "\"? "
         << (solution.isIsomorphic(s2, t2) ? "Yes" : "No") << endl;

    // Example 3
    string s3 = "paper";
    string t3 = "title";
    cout << "Is \"" << s3 << "\" isomorphic to \"" << t3 << "\"? "
         << (solution.isIsomorphic(s3, t3) ? "Yes" : "No") << endl;

    return 0;
}