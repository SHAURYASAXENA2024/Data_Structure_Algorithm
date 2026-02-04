#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
    int countDigitOne(int n){
        vector<int> res;
        vector<int> s;
        for(int i=0; i<=n; i++){
            s.push_back(i);
        }
        for(int i=0; i<=s.size(); i++){
            int rem=0;
            rem=s[i]%10;
            res.push_back(rem);
            s[i]=s[i]/10;
        }
    }
};
int main()
{
return 0;
}