/*
  Link: https://leetcode.com/problems/first-missing-positive/
*/

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
  int firstMissingPositive(vector<int>& nums) {
    int len = nums.size();

    unordered_map<int, int> map;
    for (int i=0; i<len; i++) {
      map[nums[i]] = 1;
    }
    
    for (int i=1; i<=len; i++) {
      if (map.find(i) == map.end()) return i;
    }
  
    return len + 1;
  }
};

int main() {
  Solution solution;
  vector <int> v = {3,4,-1,1};

  cout << solution.firstMissingPositive(v) << endl;
  return 0;
}