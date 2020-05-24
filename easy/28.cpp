/*
  Link: https://leetcode.com/problems/implement-strstr/
*/

#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;

#define d 256

class Solution {
  public:
  // Just using the Naive algorithm
    int strStr(string haystack, string needle) {
      if (haystack == "" && needle == "") return 0;
      if (haystack != "" && needle == "") return 0;
      if (haystack.size() < needle.size()) return -1;
      int h = haystack.size();
      int n = needle.size();
      for (int i=0; i<=h-n; i++) {
        int j = 0;
        int count = 0;
        while (j < n)
        {
          if (haystack[i+j] == needle[j]) count++;
          j++;
        }
        if (count == n) return i;        
      }
      return -1;        
    }
};


int main (int argc, char** argv) {
  Solution solution;
  printf("%d\n", solution.strStr(argv[1], argv[2]));
}
