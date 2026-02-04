#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
class solution {
    public:
    vector<vector<int>> foursum(vector<int>& nums , int target){
        ///bruet force ///
        set<vector<int>> st;
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<nums.size(); j++){
                for(int k=0; k<nums.size(); k++){
                    for(int l=0; l<nums.size(); l++){
                        long long sum = nums[i]=nums[j];
                        sum = nums[k];
                        sum= nums[l];
                        if(sum==target){
                            vector<int> temp = {nums[i],nums[j],nums[k],nums[l]};
                            sort(temp.begin(),temp.end());
                            st.insert(temp);

                        }
                    }
                }
            }
        }
        vector<vector<int>> ans(st.begin(),st.end());
        return ans;
    }
};
int main()
{
return 0;
}