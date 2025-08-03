#include<bits/stdc++.h>
using namespace std;

void bubble(vector<int> &arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
int main(){
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    int n = arr.size();
    bubble(arr, n);

    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}