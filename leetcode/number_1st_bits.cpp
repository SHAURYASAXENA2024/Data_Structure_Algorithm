class Solution {
public:
  string convert2binary(int n) {
    string res = "";
    while (n > 0) {
      if (n % 2 == 1) {
        res += "1";
      } else {
        res += "0";
      }
      n = n / 2;
      reverse(res.begin(), res.end());
    }
    return res;
  }
  int hammingWeight(int n) {
    string res2 = convert2binary(n);
    int noOf = 0;
    for (int i = 0; i < res2.length(); i++) {
      if (res2[i] == '1') {
        noOf++;
      }
    }
    return noOf;
  }
};
