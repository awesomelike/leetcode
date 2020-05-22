/*
  Link: https://leetcode.com/problems/two-sum/
*/

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
  public:
    unordered_map <int, int> hash;
    vector<int> twoSum(vector<int>& nums, int target) {
      vector <int> ans;
      for (auto it = nums.begin(); it!=nums.end(); ++it) {
        int i = distance(nums.begin(), it);
        int diff = target - *it;
        if (hash.find(diff) == hash.end()) {
          hash.insert(make_pair(*it, i));
        } else {
          ans.push_back(hash[diff]);
          ans.push_back(i);
        }
      }
      return ans;
    }
};

int main(int argc, const char** argv) {
  Solution solution;
  
  vector<int> nums = {5,4,27,3,12};
  int target = 7;

  vector<int> ans = solution.twoSum(nums, target);
  
  for (auto x: solution.twoSum(nums, target)) {
    printf("%d\n", x);
  }
  return 0;
}

