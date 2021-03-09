/*
  Link: https://leetcode.com/problems/decode-ways/
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int numDecodings(string s) {
    int length = s.size();
    vector<int> dp(length + 1);
    dp[0] = 1;
    dp[1] = s[0] != '0' ? 1 : 0;

    for (int i=2; i<=length; i++) {
      int singleDigit = stoi(s.substr(i-1, 1));
      int doubleDigit = stoi(s.substr(i-2, 2));

      if (singleDigit >= 1 && singleDigit <= 9) {
        dp[i] += dp[i-1];
      }

      if (doubleDigit >= 10 && doubleDigit <= 26) {
        dp[i] += dp[i-2];
      } 
    }

    return dp[length];
  }
};

int main (int argc, char **argv) {
  if (argc != 2) {
    cout << "Invalid input" << endl;
    return -1;
  }
  Solution solution;
  string str(argv[1]);
  cout << solution.numDecodings(str) << endl;
  return 0;
}