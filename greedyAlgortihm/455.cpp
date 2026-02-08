#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution{
    public:
    int finsContentChildren(vector<int>& g, vector<int>& s){
        // two pointer approach
        int n,m;
        n=g.size();
        m=s.size();
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int l=0,r=0;
        while(l<n && r<m){
            if(s[r]>=g[l]){
                l++;
                r++;
            }
            else{
                r++;
            }
        }
        return l;
    }
};
int main()
{
return 0;
}