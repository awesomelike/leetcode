/*
  Link: https://leetcode.com/problems/maximum-subarray/
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/* 
  We use Kadane's Algorithm 
  so that we can compute the result in O(n) time
*/
class Solution {
  public:
    int maxSubArray(vector<int>& nums) {
      int best = nums[0], n = nums.size();
      int sum = nums[0];
      for (int i = 1; i < n; i++) {
        sum = max(nums[i], sum + nums[i]);
        best = max(sum, best);
      }
      return best;
    }
};

int main(int argc, const char** argv) {
  Solution solution;
  vector<int> nums;
  for (int i=1; i<argc; i++) {
    nums.push_back(atoi(argv[i]));
  }
  printf("%d\n", solution.maxSubArray(nums));
  return 0;
}