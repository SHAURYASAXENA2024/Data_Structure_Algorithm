#include<iostream>
using namespace std;
class hello {};
int main()
{
    int n; cin >> n;
    int k; cin >> k;
    int rem=0,res=0;
    while(k){
        rem=n%10;
        if(rem==0){
            n=n/10;
        }
        else{
            n=n-1;
        }
        k--;
    }
    cout << n << endl;
    return 0;
}