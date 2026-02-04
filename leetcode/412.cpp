#include<iostream>
#include<vector>
using namespace std;
class solution {
    public:
    vector<string> fizzBuzz(int n){
        vector<string> str;
        int i=1;
        while(i<=n){
            if(i%3==0 && i%5==0){
            str.push_back("FizzBuzz");
        }
        else if(i%3==0){
            str.push_back("Fizz");
        }
        else if(i%5==0){
            str.push_back("buzz");
        }
        else{
            str.push_back(to_string(i));
        }
        i++;
        }
        return str;
    }
};
int main()
{
    return 0;
}