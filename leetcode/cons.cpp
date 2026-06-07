#include <algorithm>
#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  string numbers = "";
  if (n == 0) {
    numbers = "0";
  }
  while (n > 0) {
    numbers += (n % 2) + '0';
    n /= 2;
  }
  reverse(numbers.begin(), numbers.end());
  int con = 0;
  for (int i = 0; i < numbers.length() - 1; i++) {
    if (numbers[i] == '1' && numbers[i + 1] == '1') {
      con++;
    }
  }
  if (con == 1) {
    cout << "true" << endl;
  } else {
    cout << "false" << endl;
  }
  cout << con << endl;
  return 0;
}
