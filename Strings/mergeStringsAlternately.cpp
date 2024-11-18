#include<iostream>
#include<string>
using namespace std;

class Solution{
    public:
        string mergeAlternately(string w1, string w2) {
            string result = "";
            int len1 = w1.length();
            int len2 = w2.length();
            int minLen = min(len1, len2);
            for (int i = 0; i < minLen; i++) {
                result += w1[i];
                result += w2[i];
            }
            if (len1 > len2) {
                for (int i = minLen; i < len1; i++) {
                    result += w1[i];
                }
            } else if (len2 > len1) {
                for (int i = minLen; i < len2; i++) {
                    result += w2[i];
                }
            }
            return result;
        }
};

int main(){
    Solution solution;
    string w1 = "abc";
    string w2 = "pqr";
    cout << solution.mergeAlternately(w1, w2) << endl;
    return 0;
}