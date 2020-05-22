/*
  Link: https://leetcode.com/problems/roman-to-integer/
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  unordered_map<char, int> dict = {
    {'I', 1},
    {'V', 5},
    {'X', 10}, 
    {'L', 50},
    {'C', 100}, 
    {'D', 500},
    {'M', 1000}
  };
  int romanToInt(string s) {
    int ans = 0;

    for (int i=0; i<s.length(); i++) {
      int v1 = dict[s[i]];
      if (i+1 < s.length()) {
        int v2 = dict[s[i+1]];
        if (v1 >= v2) ans +=v1;
        else {
          ans = ans + v2 - v1;
          i++;
        } 
      } else {
        ans += v1;
      }
    }

    return ans;
  }
};

int main(int argc, const char** argv) {
  Solution solution;
  printf("%d\n", solution.romanToInt(argv[1]));
  return 0;
}