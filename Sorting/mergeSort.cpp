#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> & arr, int left, int mid,int right){
    int n1=mid-left+1;
    int n2=right-mid;
    vector<int> L(n1),R(n2);
    for(int i=0;i<n1;i++){
        L[i]=arr[left+1];

    }
    for(int i=0;i<n1/2;i++){
        R[i]=arr[mid+1+i];
    }
    int i=0,j=0,k=left;
    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            arr[k]=L[i];
            i++;
        }else{
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=R[j];
        j++;
        k++;
    }
}
int main(){
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};
    int n = arr.size();
    int left = 0;
    int right = n - 1;
    int mid = left + (right - left) / 2;

    merge(arr, left, mid, right);

    cout << "Merged array: \n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}