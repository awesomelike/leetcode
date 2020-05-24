/*
  Link: https://leetcode.com/problems/search-insert-position/
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
  This solution uses binary search 
  to find the appropriate index in nums to in O(logn) time .
*/ 
class Solution1 {
  public:
    int searchInsert(vector<int>& nums, int target) {
      int low = 0;
      int high = nums.size() - 1;
      int position;
      while (low <= high)
      {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
          return mid;
        } else if (target < nums[mid]) {
          high = mid - 1;
          position = mid;
        } else {
          low = mid + 1;
          position = mid + 1;
        }
      }
      return position;
    }
};
/*
  This solution uses built in C++ function (hence faster)
  to compute the appropriate index 
*/
class Solution2 {
  public:
    int searchInsert(vector<int>& nums, int target) {
      return distance(nums.begin(), lower_bound(nums.begin(), nums.end(), target));
    }
};

int main (int argc, char **argv) {
  Solution1 solution;
  vector<int> nums;
  int target = atoi(argv[1]);
  for (int i=2; i<argc; i++) {
    nums.push_back(atoi(argv[i]));
  }
  printf("%d\n", solution.searchInsert(nums, target));
  return 0;
}