// find smlest and second smallest eleemst of array
#include<iostream>
using namespace std;
int main() {
    int arr[]={-9,8,-10,1,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int smallest = arr[0];
    int second_smallest = arr[0];
    for (int i = 1; i < n; i++) {
        if(arr[i]<smallest){
            second_smallest=smallest;
            smallest = arr[i];

        }
        else if(arr[i]<second_smallest && arr[i]!=smallest){
            second_smallest=arr[i];
        }
    }
    cout<<"Smallest element is "<<smallest<<endl;
    cout<<"Second smallest element is "<<second_smallest<<endl;
    return 0;
}