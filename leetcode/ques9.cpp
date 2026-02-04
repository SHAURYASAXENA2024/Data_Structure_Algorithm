#include<iostream>
using namespace std;
class solution {
    public:
    bool isplaindrome(int x){
        int rem=0;
        int original=x;
        while(x>0){
            int digit= x%10;
            rem=rem*10+digit;
            x=x/10;
        }
        if(rem==original){
            return true;
        }
        else return false;
    }
};
int main()
{
return 0;
}