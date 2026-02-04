#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
class solution {
    public:
    // one method is hashing
    int singleNumber(vector<int> & nums){
        // int c=0;
        // sort(nums.begin(),nums.end());
        // for(int i=0; i<nums.size(); i++){
        //     if(nums[i]!=nums[i+1]){
        //         c=i;
        //     }
        // }
        // return nums[c];
        unordered_map<int, int> freq;
    for (int x : nums) {
        freq[x]++;
    }
    for (auto it : freq) {
        if (it.second == 1)
            return it.first;
    }

    return -1;

    }
};
int main()
{
return 0;
}