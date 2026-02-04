#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class solution {
    public:
    int missingNumber(vector<int>& nums){
        sort(nums.begin(),nums.end());
        int store=0;
        for(int i=0; i<=nums.size(); i++){
            if(i<nums.size() && nums[i]==i){
                continue;
            }
            else{
                store=i;
                break;
            }
        }
        return store;
    }
};
int main()
{
return 0;
}