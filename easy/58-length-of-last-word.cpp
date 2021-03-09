/*
  Link: https://leetcode.com/problems/length-of-last-word/
*/

#include <iostream>
#include <string>
using namespace std;

class Solution {
  public:
    int lengthOfLastWord(string s) {
      if (s == "") return 0;
      int n = s.size();
      int i = n - 1;
      int length = 0;
      while (i >=0 && s[i] == ' ')
      {
        i--;
      }
      while (i >= 0 && s[i] != ' ')
      {
        length++;
        i--;
      }
      return length;
    }
};

int main(int argc, char const *argv[])
{
  Solution solution;
  printf("%d\n", solution.lengthOfLastWord(argv[1]));
  return 0;
}
