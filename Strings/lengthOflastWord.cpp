#include <iostream>
#include <string.h>
using namespace std;

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int len = s.length();
        int last = len - 1;
        while (last >= 0 && s[last] == ' ')
            last--;
        int i = last;
        while (i >= 0 && s[i] != ' ')
            i--;
        return last - i;
    }
};
int main()
{
    Solution s;
    string str = "Hello Classs";
    cout << s.lengthOfLastWord(str) << endl;
    return 0;
}
