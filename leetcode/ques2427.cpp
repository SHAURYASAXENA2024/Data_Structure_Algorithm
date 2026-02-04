#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class solution {
    public:
    int commonFactors(int a , int b){
        vector<int> v;
        vector<int> v1;
        int cmt=0;
        int cmt2=0;
        for(int i=1; i<=a; i++){
            if(a%i==0){
                v.push_back(i);
            }
        }
        for(int j=0; j<=b; j++){
            if(b%j==0){
                v1.push_back(j);
            }
        }
        sort(v.begin(),v.end());
        sort(v1.begin(),v1.end());
        vector<int> common;
        set_intersection(v.begin(),v.end(),v1.begin(),v1.end(),back_inserter(common));
        return common.back();
    }
};
int main()
{
    return 0;
}