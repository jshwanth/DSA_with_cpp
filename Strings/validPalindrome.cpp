#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool isPalindrome(string s){
        int left=0;
        int right=s.size()-1;
        while(left<right){
            if(s[left]!=s[right]) return false;
            left++;
            right--;
        }
        return true;
    }
};

int main(){
    string s;
    cin>>s;
    Solution obj;
    if(obj.isPalindrome(s)) cout<<"Palindrome";
    else cout<<"Not a Palindrome";
    return 0;
}  