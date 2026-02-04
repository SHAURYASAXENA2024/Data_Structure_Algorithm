#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
class solution {
    public:
    string reversePrefix(string s , int k){
        reverse(s.begin(),s.end()+k);
        return s;
    }
};
int main()
{
    return 0;
}