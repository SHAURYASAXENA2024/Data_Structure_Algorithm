#include<iostream>
using namespace std;
class solution{
    public:
    bool isPowerTwo(int n){
        int base=2;
        int x=0;
        if(n<=0) return false;
        while(n%base==0){
            n /=base;
            x++;
        }
        if(n==1){
            cout << "true" << endl;
        }
        else{
            cout << "false" << endl;
        }
    }
};
int main()
{
    return 0;
}