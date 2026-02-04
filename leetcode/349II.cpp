#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class hello {
    public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2){
        vector<int> res;
        unordered_map<int,int> mp;
        unordered_map<int, int> mp2;
        for(int x:nums1){
            mp[x]++;
        }
        for(int y:nums2){
            mp2[y]++;
        }
        for(auto &it:mp){
            for(auto &it2:mp2){
                if(it.first==it2.first){
                    res.push_back(it.first);
                }
            }
        }
        return res;
    }
};
int main()
{
return 0;
}