#include<iostream>
using namespace std;
class soltuion {
    public:
    int addDigit(int num){
        if(num<10){
            return num;
        }
        int rem=0;
        int add=0;
        while(num!=0){
            rem=num%10;
            add+=rem;
            num=num/10;
        }
        if(add>=10){
                return addDigit(add);
            }
            
        return add;
    }
};
int main()
{
    soltuion ss;
    int res;
    res=ss.addDigit(119);
    cout << res << endl;
    return 0;
}