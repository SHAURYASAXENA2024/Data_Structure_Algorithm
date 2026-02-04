#include<iostream>
#include<cctype>
#include<algorithm>
using namespace std;
class solution {
    public:
    void isPalindrome(string s){
        string cl;
        for (char c : s) {
        if (isalnum(c))
            cl += tolower(c);
        }
        // int flag=0;
        // if(res==" "){
        //     return true;
        // }
        // else{
        //     int i=0;
        //     int j=res.length();
        //     for(int i=0,j; i<j; i++,j--){
        //         if(s[i]!=s[j]){
        //             flag=1;
        //             break;
        //         }
        //     }
        // }
        // if(flag==1){
        //     return false;
        // }
        string res =cl;
        reverse(res.begin(),res.end());
        cout << res << endl;
        
    }
};
int main()
{
    solution ss;
    ss.isPalindrome("A man, a plan, a canal: Panama");
    return 0;
}