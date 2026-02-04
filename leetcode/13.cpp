#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class solution {
    public:
    int romanToInteger(string s){
        //wrong approach
        // int sum=0;
        // unordered_map<string,vector<int>> mp;
        // mp["I"].push_back(1);
        // mp["II"].push_back(2);
        // mp["III"].push_back(3);
        // mp["IV"].push_back(4);
        // mp["V"].push_back(5);
        // mp["VI"].push_back(6);
        // mp["VII"].push_back(7);
        // mp["VIII"].push_back(8);
        // mp["XI"].push_back(9);
        // mp["X"].push_back(10);
        // mp["L"].push_back(50);
        // mp["C"].push_back(100);
        // mp["D"].push_back(500);
        // mp["M"].push_back(1000);
        // for(auto it=mp.begin(); it!=mp.end(); it++){
        //     if(s==it->first){
        //         for(int val : it->second){
        //             sum += val;
        //         }
        //     }
        //     else{
        //         for(char ch:s){
        //             for(char sh:it->first){
        //                 if(ch==sh){
        //                     for(int val:it->second){
        //                         sum += val;
        //                     }
        //                 }
        //             }
        //         }
        //     }
        // }
        // return sum;
        /// correct approach
        unordered_map<char, int> mp = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int sum = 0;

    for (int i = 0; i < s.size(); i++) {
        if (i + 1 < s.size() && mp[s[i]] < mp[s[i + 1]]) {
            sum -= mp[s[i]];
        } else {
            sum += mp[s[i]];
        }
    }
    return sum;
    }
};
int main()
{
return 0;
}