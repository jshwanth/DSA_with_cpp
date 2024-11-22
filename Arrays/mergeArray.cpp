#include <iostream>
#include <vector>

class Solution {
public:
    void merge(std::vector<int>& A, int m, std::vector<int>& B, int n) {
        int idx = m + n - 1, i = m - 1, j = n - 1;

        while (i >= 0 && j >= 0) {
            if (A[i] >= B[j]) {
                A[idx] = A[i];
                idx--;
                i--;
            } else {
                A[idx--] = B[j--];
            }
        }
        while (j >= 0) {
            A[idx--] = B[j--];
        }
    }
};

int main() {
    Solution solution;

    // Example arrays
    std::vector<int> A = {1, 3, 5, 0, 0, 0}; // The size of A is 6, with 3 valid elements
    std::vector<int> B = {2, 4, 6};          // B has 3 valid elements
    int m = 3;                                // Number of valid elements in A
    int n = 3;                                // Number of valid elements in B

    // Merging B into A
    solution.merge(A, m, B, n);

    // Output the merged array
    std::cout << "Merged array: ";
    for (int num : A) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}