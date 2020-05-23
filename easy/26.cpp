/*
  Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
  public:
    int removeDuplicates(vector<int>& nums) {
      /*
        std::unique(iteratorFirst, iteratorLast) works in the following way:
        it removes the duplicates in range iteratorFirst and iteratorLast and
        returns a pointer to the vector index+1, Where index is the last element not removed
      */
      nums.erase(unique(nums.begin(), nums.end()), nums.end());
      return nums.size();
    }
};

int main () {
  Solution solution;
  vector<int> nums = {1,1,2,2,3,3,3,4};
  printf("%d\n", solution.removeDuplicates(nums));
  return 0;
}