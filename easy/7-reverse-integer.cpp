/*
  Link: https://leetcode.com/problems/reverse-integer
*/

#include <bits/stdc++.h>

class Solution {
public:
  int reverse(int x) {
    int res = 0;
    while (x != 0) {
      int digit = x % 10;
      x /= 10;
      if (res > INT_MAX/10 || res < INT_MIN/10) return 0;
      res = res * 10 + digit;
    }
    return res;
  }
};

int main () {
  Solution solution;
  printf("%d\n", solution.reverse(-123));
  return 0;
}