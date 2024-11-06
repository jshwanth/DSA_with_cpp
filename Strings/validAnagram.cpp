#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

class Solution {
public:
    bool isAnagram(const string& s, const string& t) {
        if (s.size() != t.size()) return false;
        unordered_map<char, int> count;
        for (char ch : s) count[ch]++;
        for (char ch : t) {
            if (--count[ch] < 0) return false;
        }
        return true;
    }
};

int main() {
    Solution solution;
    
    string s1 = "anagram";
    string t1 = "nagaram";
    
    if (solution.isAnagram(s1, t1)) {
        cout << s1 << " and " << t1 << " are anagrams." << endl;
    } else {
        cout << s1 << " and " << t1 << " are not anagrams." << endl;
    }

    string s2 = "rat";
    string t2 = "car";
    
    if (solution.isAnagram(s2, t2)) {
        cout << s2 << " and " << t2 << " are anagrams." << endl;
    } else {
        cout << s2 << " and " << t2 << " are not anagrams." << endl;
    }

    return 0;
}