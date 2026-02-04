#include<iostream>
#include<math.h>
using namespace std;
class soltuion {
    public:
    bool isHappy(int n){
        if(n>0&&n<9){
            return false;
        }
        while(n!=1){
            int rem=0;
            rem=n%10;
            n=n/10;
            int add=0;
            add = pow(rem,2)+pow(n,2);
            n=add;
        }
        return true;
    }
};
int main()
{
    soltuion ss;
    cout << ss.isHappy(19) << endl;
    return 0;
}