#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class solution {
    public:
    vector<int> majorityElement(vector<int>& nums){
        bool found=false;
        vector<int> f;
        unordered_map<int,int> freq;
        for(int x:nums){
            freq[x]++;
        }
        for(auto it:freq){
            if(it.second >= nums.size()/3){
                f.push_back(it.first);
                break;
            }
        }
        return f;
    }
};
int main()
{
return 0;
}