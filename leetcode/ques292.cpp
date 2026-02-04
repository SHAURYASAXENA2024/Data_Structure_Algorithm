#include<iostream>
using namespace std;
class solution {
    public:
    bool canWinNim(int n){
        int cnt=0;
        while(n!=0){
            if(n==1 || n==2 || n==3){
                return true;
                cnt=1;
            }
            else{
                n=n-1;
                canWinNim(n);
            }
            if(cnt!=1){
                return false;
            }
            n++;
        }
    }
};
int main()
{
    return 0;
}