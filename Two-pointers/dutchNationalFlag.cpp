// sort colors (0s,1,s,2s)

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void sortcolors(vector<int>& nums){
        int low=0,high=nums.size()-1, mid=0;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid++], nums[low++]); 
            }
            else if(nums[mid]==1) mid++;
            else{
                swap(nums[mid], nums[high--]);
            }
        }

    }
};

int main(){
    Solution s;
    vector<int> nums={2,0,2,1,1,0};
    s.sortcolors(nums);
    for(auto i: nums){
        cout<<i<<" ";
    }
    return 0;
}