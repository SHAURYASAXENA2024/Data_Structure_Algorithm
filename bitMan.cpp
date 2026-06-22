#include <algorithm>
#include <iostream>
using namespace std;
string convert2Binary(int n) {
  string res = "";
  while (n > 0) {
    if (n % 2 == 1) {
      res += "1";
    } else {
      res += "0";
    }
  }
  reverse(res.begin(), res.end());
  return res;
}
int main() {
  int n;
  cin >> n;
  string res2 = convert2Binary(n);
  cout << res2 << endl;
}
