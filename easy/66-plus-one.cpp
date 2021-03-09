/*
  Link: https://leetcode.com/problems/plus-one/
*/

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

class Solution {
  public:
    vector<int> plusOne(vector<int>& digits) {
      int n = digits.size();
      vector<int> answer;
      int lastDigit = digits[n-1];
      if (lastDigit < 9) {
        digits[n-1] = lastDigit + 1;
        return digits;
      } else {
        int i = n - 1;
        int carry = 1;
        while (i >= 0)
        {
          if (digits[i] + carry > 9)  {
            answer.insert(answer.begin(), 0);
            if (i == 0) answer.insert(answer.begin(), 1);
            carry = 1;
          } else {
            answer.insert(answer.begin(), digits[i] + carry);
            carry = 0;
          }
          i--;
        }
      }
      return answer;
    }
};

int main(int argc, char const *argv[])
{
  Solution solution;
  vector<int>digits;
  for (int i=1; i<argc; i++) {
    digits.push_back(atoi(argv[i]));
  }
  vector<int> answer = solution.plusOne(digits);
  for (int i=0; i<answer.size(); i++) {
    printf("%d ", answer[i]);
  }
  return 0;
}
