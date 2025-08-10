#include<bits/stdc++.h>
using namespace std;

int kthLargest(vector<int>& arr, int k){
    priority_queue<int,vector<int>, greater<int>> pq;
    for(int i=0;i<arr.size();i++){
        pq.push(arr[i]);
    }
    for(int i=k;i<arr.size();i++){
        if(arr[i]>pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }
    return pq.top();
}
int main(){
    vector<int> arr={3,2,3,1,2,4,5,5,6};
    int k=4;
    int res = kthLargest(arr,k);
    cout<<res;
    
}