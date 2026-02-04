#include<iostream>
#include<string>
using namespace std;
class solution {
    public:
    string addString(string num1 , string num2){
        long long x = stoll(num1);
        long long y = stoll(num2);
        long long add=0;
        add = x + y;
        string s = to_string(add);
        return s;
        // another code
        __int128 x = 0, y = 0;

    for (char c : num1)
        x = x * 10 + (c - '0');

    for (char c : num2)
        y = y * 10 + (c - '0');

    __int128 add = x + y;

    if (add == 0) return "0";

    string s;
    while (add > 0) {
        s.push_back('0' + add % 10);
        add /= 10;
    }
    reverse(s.begin(), s.end());
    return s;
    }
};
int main()
{
    solution ss;
    ss.addString("11","123");
    return 0;
}