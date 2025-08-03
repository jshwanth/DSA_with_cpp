#include <bits/stdc++.h>
using namespace std;

void selectionsort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int mini = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[mini])
                mini = j;
        }
        swap(arr[i], arr[mini]);
    }
}
int main()
{
    vector<int> arr = {64, 25, 12, 22, 11};
    int n = arr.size();
    selectionsort(arr, n);

    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}