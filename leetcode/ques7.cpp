#include<iostream>
using namespace std;
class soltuion {
    public:
    int reverse(int x){
        int rem=0;
        int reverse=0;
        while(x){
        rem=x%10;
        reverse=reverse*10+rem;
        x=x/10;
        }
        return reverse;
    }
};
int main()
{
    soltuion ss;
    int ans;
    ans=ss.reverse(-123);
    cout << ans << endl;
    return 0;
}