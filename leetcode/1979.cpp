lass Solution{
  public : int findGCD(vector<int> & nums){sort(nums.begin(), nums.end());
int x = nums[0];
int y = nums[nums.size() - 1];
return gcd(x, y);
}
}
;
