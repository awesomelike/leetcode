/*
  Link: https://leetcode.com/problems/container-with-most-water/
*/
#include <iostream>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& heights) {
      int best = 0;
      
      int n = heights.size();

      int low = 0;
      int high = n-1;
      while (low < high)
      {
        best = max(best, min(heights[low], heights[high]) * (high-low));
        if (heights[low] < heights[high]) {
          low += 1;
        } else {
          high -= 1;
        }
      }
      
      return best;
    }
};

int main() {
  Solution solution;
  vector<int> v = { 1, 2, 10, 3 };
  cout << solution.maxArea(v) << endl;
  return 0;
}