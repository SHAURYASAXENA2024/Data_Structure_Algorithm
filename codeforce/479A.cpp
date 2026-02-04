#include<iostream>

using namespace std;
class hello {};
int add(int a , int b, int c){
    return(a+b+c);
}
int mul(int a , int b, int c){
    return(a*b*c);
}
int addAndMul(int a , int b, int c){
    return(a+b*c);
}
int mulAndAdd(int a ,int b, int c){
    return(a*b+c);
}
int bracketLast(int a, int b , int c){
    return(a+(b*c));
}
int bracketFirst(int a, int b, int c){
    return((a+b)*c);
}
int mulFirst(int a, int b, int c){
    return((a*b)+c);
}
int mullast(int a ,int b, int c){
    return(a+(b*c));
}
int main()
{
    return 0;
}