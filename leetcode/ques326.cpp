#include<iostream>
#include<math.h>
using namespace std;
class solution {
    public:
    bool isPowerOfThree(int n){
        int base=4;
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
    solution ss;
    ss.isPowerOfThree(27);
    return 0;
}