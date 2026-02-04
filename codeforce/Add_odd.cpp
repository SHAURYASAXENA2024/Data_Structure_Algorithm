#include<iostream>
#include<vector>
using namespace std;
class hello {};
int main()
{
    int n; cin >> n;
    while(n--){
        int a; int b;
        cin >> a >> b;
        if(a==b){
            cout << 0 << endl;
        }
        else{
            if(a<b){
                int sub = b-a;
                if(sub%2==0){
                    int n = sub/2;
                    
                }
                else{

                }

            }
        }
    }

    return 0;
}