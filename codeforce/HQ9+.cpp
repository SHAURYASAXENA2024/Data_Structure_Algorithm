#include<iostream>
#include<string>
#include<vector>
using namespace std;
class hello {};
int main()
{
    string str;
    getline(cin,str);
    for(int i=0; i<str.length(); i++){
        for(char ch : str){
            if(ch=='H' || ch=='Q' || ch=='9' || ch=='+'){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}