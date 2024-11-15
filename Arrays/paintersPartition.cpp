#include <iostream>
#include <vector>
#include <climits>
using namespace std;

bool isPossible(vector<int> &arr, int n, int m, int maxAllowedTime)
{
    int painters = 1, time = 0;
    for (int i = 0; i < n; i++)
    {
        time += arr[i];
        if (time > maxAllowedTime)
        {
            painters++;
            time = arr[i];
            if (painters > m)
                return false;
        }
    }
    return true;
}

int minTimeToPaint(vector<int> &arr, int n, int m)
{
    if (n == 0) return 0; // No boards to paint
    if (m == 0) return INT_MAX; // Impossible to paint with 0 painters

    int sum = 0, maxValue = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        maxValue = max(maxValue, arr[i]);
    }
    int st = maxValue, end = sum, ans = -1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isPossible(arr, n, m, mid)) // left
        {
            ans = mid;
            end = mid - 1;
        }
        else // right
        {
            st = mid + 1;
        }
    }
    return ans;
}
int main(){
    vector<int> arr = {10, 20, 30, 40, 50};
    int n = arr.size();
    int m = 2;
    cout << "Minimum time required to paint all boards is " << minTimeToPaint(arr,
    n, m);
    return 0;

}