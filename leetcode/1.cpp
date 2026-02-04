#include<iostream>
#include<vector>
#include<map>
using namespace std;
class solutuion {
    public:
    vector<int> twosum(vector<int>& nums, int target){
        map<int,int> mpp;
        int n = nums.size();
        for(int i=0; i<n; i++){
            int num=nums[i];
            int needed = target-num;
            if(mpp.find(needed)!=mpp.end()){
                return {mpp[needed],i};
            }
            mpp[num]=i;
        }
        return {-1,-1};
    }
};
int main()
{
    return 0;
}