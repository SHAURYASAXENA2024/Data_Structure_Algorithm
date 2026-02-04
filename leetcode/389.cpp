#include<iostream>
#include<unordered_map>
#include<map>
#include<string>
using namespace std;
class solution {
    public:
    char findDifference(string s , string t){
        char res;
        map<char,int> mp;
        map<char,int> mp2;
        for(char ch:s){
            mp[ch]++;
        }
        for(char ch2:t){
            mp2[ch2]++;
        }
        if(mp.size()!=mp2.size()){
            if(mp.size()>mp2.size()){
                res = mp.rbegin()->first;
            }
            else if(mp2.size()>mp.size()){
                res=mp2.rbegin()->first;
            }
        }
        return res;
    }
};
int main()
{
return 0;
}