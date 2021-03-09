/*
  Link: https://leetcode.com/problems/palindrome-number/
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int digitCount(int x) {
    return floor(log10(x)+1);
  }

  void prepare(int *x, int *n) {
    int p = (int)pow(10, *n-1);
    *x = *x % p;
    *x -= *x % 10;
    *x = *x / 10;
    *n-=2; 
  }

  bool isPalindrome(int x) {
    if (x < 0) return false;
    if (x == 0) return true;
    
    int n = digitCount(x);
    
    while(x > 0) {
      if (x % 10 != x/(int)pow(10, n-1)) {
        return false;
      }
      prepare(&x, &n);
    }
    return true;
  }
};

int main(int argc, const char** argv) {
  Solution solution;
  printf("%d\n", solution.isPalindrome(atoi(argv[1])));
}