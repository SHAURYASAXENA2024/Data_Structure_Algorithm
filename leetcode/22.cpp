#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
  int n;
  cin >> n;
  stack<string> mystack;
  while (n--) {
    mystack.push("()");
  }
  cout << "top element in the stack is : ";
  cout << mystack.top();
  return 0;
}
