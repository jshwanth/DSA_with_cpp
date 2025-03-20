#include <iostream>
#include <vector>
#include <utility> 
using namespace std;

vector<pair<int, int>> findAllPairs(int arr[], int n, int target) {
    vector<pair<int, int>> result;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                result.push_back({arr[i], arr[j]}); 
            }
        }
    }
    return result; 
}

int main() {
    int arr[] = {2, 7, 4, -5, 11, 5, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 15;

    vector<pair<int, int>> pairs = findAllPairs(arr, n, target);

    if (!pairs.empty()) {
        cout << "Pairs found:\n";
        for (const auto& p : pairs) {
            cout << "(" << p.first << ", " << p.second << ")\n";
        }
    } else {
        cout << "No pairs found";
    }

    return 0;
}