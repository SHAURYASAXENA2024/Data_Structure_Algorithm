#include <iostream>
#include <vector>
using namespace std;
int main() {
  string s;
  getline(cin, s);
  // apply according to the bodmas
  for (int i = 0; i < s.length(); i++) {
    int add = 0;
    itn sub = 0;
    int mul = 0;
    int div = 0;
    int total = 0;
    if (s[i] == "+") {
      add = s[i - 1] + s[i + 1];
    } else if (s[i] == "-") {
      sub = s[i - 1] - s[i + 1];
    } else if (s[i] == "/") {
      div = s[i - 1] / s[i + 1];
    } else if (s[i] == "*") {
      mul = s[i - 1] * s[i + 1];
    } else {
      return;
    }
    total = add + sub + mul + div;
  }
  cout << total << endl;
}
