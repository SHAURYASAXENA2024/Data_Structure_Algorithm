#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class solution {
    public:
    int searchInsert(vector<int>& nums, int target){
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==target){
                return i;
            }
            
        }int low = 0, high = nums.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target)
            return mid;
        else if (nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    // low is the insert position
    return low;
    }
};