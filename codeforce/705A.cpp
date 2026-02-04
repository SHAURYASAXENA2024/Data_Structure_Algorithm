#include<iostream>
#include<vector>
#include<string>
using namespace std;
class hello {};
void result(int n){
    vector<string> str;
    while(n!=0){
        if(n==0){
            break;
        }
        else if(n==1){
            str.push_back("I hate it");
            break;
        }
        else if(n==2){
            str.push_back("I hate that I love it");
            break;
        }
        else if(n==3){
            cout << "I hate that I love that I hate it" << endl;
            break;
        }
        else{
            result(n-1);
        }
    }
}
int main()
{
    int n ; cin >> n;
    result(n);
    return 0;
}