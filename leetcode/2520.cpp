#include<iostream>
#include<vector>
using namespace std;
class solution {
    public:
    int countDigits(int n){
        vector<int> num;
        int c=0;
        while(num>0){
            int div=0;
            div=n/10;
            num.push_back(div);
            n--;
        }
        for(int i=0; i<num.size(); i++){
            if(n%num[i]==0){
                c++;
            }
        }
        return c;
    }
};
int main()
{
return 0;
}