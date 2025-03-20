#include<iostream>
using namespace std;

int findContentChildren(int g[], int s[], int n, int m) {
    int i=0, j=0;
    int count=0;
    while(i<n && j<m) {
        if(g[i]<=s[j]) {
            count++;
            i++;
            j++;
        }
        else {
            j++;
        }
    }
    return count;
}
int main() {
    int g[] = {1,2,3};
    int s[] = {1,1};
    int n = sizeof(g)/sizeof(g[0]);
    int m = sizeof(s)/sizeof(s[0]);
    cout<<findContentChildren(g, s, n, m)<<endl;
    return 0;
}