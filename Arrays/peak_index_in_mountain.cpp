#include <vector>   // For std::vector
#include <iostream> // For input/output operations

class Solution
{
public:
    int peakIndexInMountainArray(std::vector<int> &arr)
    {
        int s = 1, e = arr.size() - 2; // Start and end pointers
        while (s <= e)
        {
            int mid = s + (e - s) / 2; // Calculate mid index
            // Check if mid is the peak
            if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1])
            {
                return mid; // Return peak index
            }
            else if (arr[mid - 1] < arr[mid])
            {
                s = mid + 1; // Move right
            }
            else
            {
                e = mid - 1; // Move left
            }
        }
        return -1; // Return -1 if no peak found (should not happen in a mountain array)
    }
};

int main()
{
    Solution solution;
    std::vector<int> mountainArray = {0, 2, 8, 9, 1, 0, -10}; // Example mountain array
    int peakIndex = solution.peakIndexInMountainArray(mountainArray);

    std::cout << "Peak index: " << peakIndex << std::endl; // Output the peak index
    return 0;                                              // Return success
}