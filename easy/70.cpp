/*
  Link: https://leetcode.com/problems/climbing-stairs/
*/

#include <bits/stdc++.h>
using namespace std;

// Solution with dynamic programming
class Solution {
public:
  int climbStairs(int n) {
    int dp[n+1];
    dp[0] = 1;
    dp[1] = 1;
    for (int i=2; i<=n; i++) {
      dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
  }
};

int main(int argc, char** argv) {
  int n = atoi(argv[1]);

  Solution s;
  cout << s.climbStairs(n) << endl;
  return 0;
}
