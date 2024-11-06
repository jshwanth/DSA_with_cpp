// reverse vowels of a string

#include <iostream>
#include<unordered_set>
#include <string>
using namespace std;

class Solution{
    public:
        string reverseVowels(string s) {
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int left = 0, right = s.size() - 1;
        
        while (left < right) {
            while (left < right && vowels.find(s[left]) == vowels.end()) left++;
            while (left < right && vowels.find(s[right]) == vowels.end()) right--;
            if (left < right) {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }
        
        return s;
    }
};

int main() {
    Solution solution;
    string input = "hello";
    string output = solution.reverseVowels(input);
    cout << "Input: " << input << endl;
    cout << "Output: " << output << endl;
    return 0;
}