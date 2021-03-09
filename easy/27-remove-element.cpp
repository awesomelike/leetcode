/*
  Link: https://leetcode.com/problems/remove-element/
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
  public:
    int removeElement(vector<int>& nums, int val) {
      /*
        remove() deletes elements with given val, and moves elements lefwards.
        Finally, it returns index+1, where index is the last non-removed element
      */
      return distance(nums.begin(), remove(nums.begin(), nums.end(), val));
    }
};
