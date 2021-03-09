/*
  Link: https://leetcode.com/problems/subarray-product-less-than-k/
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int numSubarrayProductLessThanK(vector<int>& nums, int k) {
    if (k<=1) {
      return 0;
    }
    int n = nums.size();
    int p = 1;

    int l = 0;
    int r = 0;
    
    int count = 0;
    
    while (r < n)
    {
      p *= nums[r];
      while (p >= k)
      {
        p/=nums[l];
        l++;
      }
      
      count += r-l+1;
      r++;
    }

    return count;
    
  }
};

int main() {
  vector<int> v = {10, 5, 2, 6};

  Solution solution;

  cout << solution.numSubarrayProductLessThanK(v, 100) << endl;
  return 0;
}