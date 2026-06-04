#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
  string str;
  cin >> str;
  vector<string> res;
  vector<pair<int, string>> data;
  data.push_back({2, "abc"});
  data.push_back({3, "def"});
  data.push_back({4, "ghi"});
  data.push_back({5, "jkl"});
  data.push_back({6, "mno"});
  data.push_back({7, "pqrs"});
  data.push_back({8, "tuv"});
  data.push_back({9, "wxyz"});
  for (int i = 0; i < str.size(); i++) {
    if (str[i] >= 2 && str[i] <= 9) {
      res.push_back(data[i].second);
    }
  }
  for (int i = 0; i < res.size(); i++) {
    cout << res[i] << endl;
  }
  return 0;
}
// backtrack or recursive code
vector<string> ans;

void backtrack(int idx, string &current, string &digits,
               vector<string> &mapping) {

  if (idx == digits.size()) {
    ans.push_back(current);
    return;
  }

  string letters = mapping[digits[idx] - '2'];

  for (char ch : letters) {
    current.push_back(ch); // choose
    backtrack(idx + 1, current, digits, mapping);
    current.pop_back(); // backtrack
  }
}

vector<string> letterCombinations(string digits) {

  if (digits.empty())
    return {};

  vector<string> mapping = {"abc", "def",  "ghi", "jkl",
                            "mno", "pqrs", "tuv", "wxyz"};

  string current = "";
  backtrack(0, current, digits, mapping);

  return ans;
}
}
;
