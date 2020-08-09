/*
  Link: https://leetcode.com/problems/rotate-image/
*/

#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
  void rotate(vector<vector<int>>& matrix) {
    int r = matrix.size();
    for (int i = 0; i < r; i++) {
      for (int j = 0; j < r; j++) {
        swap(matrix[i][j], matrix[j][i]);
      }
    }
  }
};

int main(int argc, const char** argv) {
  Solution s;
  vector<vector<int>> v { {1,2,3}, {4,5,6}, {7,8,9} };
  s.rotate(v);
  for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        printf("%d ", v[i][j]);
      }
      cout << "\n";
    }
}