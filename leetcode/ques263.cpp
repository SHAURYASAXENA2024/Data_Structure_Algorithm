#include<iostream>
using namespace std;
class solution {
    public:
    bool isUgly(int n){
        int u=0;
        int ut=0;
        if(n%2==0 && n%3==0 && n%5==0){
            u=1;
        }
        for(int i=1; i<=10; i++){
            if(i==2 || i==3 || i==5){
                continue;
            }
            if(n%i==0){
                ut=1;
            }
        }
        if(u==1 && ut==0){
            return true;
        }
        else if(u==1 && ut==1){
            return false;
        }
        else {
            return 0;
        }
    }
};
int main()
{
    solution ss;
    cout << ss.isUgly(6) << endl;
    return 0;
}