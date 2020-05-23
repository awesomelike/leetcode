/*
  Link: https://leetcode.com/problems/valid-parentheses/
*/

#include <iostream>
#include <unordered_map>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

class Solution {
  private:
    vector<char> openBraces = {'(', '{', '['};
    vector<char> closedBraces = {')', '}', ']'};
  public:
    int indexOf(vector<char> &v, char c) {
      vector<char>::iterator it = find(v.begin(), v.end(), c);
      if (it != v.end()) return distance(v.begin(), it);
      return -1;
    }
    bool isValid(string s) {
      stack <char> bracesStack;
      for (auto c: s) {
        if(indexOf(openBraces, c) > -1) {
          bracesStack.push(c);
        } else {
          if (indexOf(closedBraces, c) > -1 && bracesStack.empty()) return false;
          else if (bracesStack.top() == openBraces[indexOf(closedBraces, c)]) bracesStack.pop();
          // If the top of the stack is not the matching open brace for c, we return false
          else return false;
        }
      }
      return bracesStack.empty();
    }
};

int main(int argc, const char** argv) {
  Solution solution;
  printf("%d\n", solution.isValid(argv[1]));
  return 0;
}