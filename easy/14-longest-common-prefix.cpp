/*
  Link: https://leetcode.com/problems/longest-common-prefix/
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
  string LCPForPair(string &string1, string &string2) {
    string result;

    int n1 = string1.length();
    int n2 = string2.length();

    for (int i=0, j=0; i<=n1-1 && j<=n2-1; i++, j++) {
      if (string1[i] != string2[j]) {
        break;
      }
      result.push_back(string1[i]);
    }
    return result;
  }
  string LCP (vector<string>& strs, int low, int high) {
    if (low == high) return strs[low];
    
    if (high > low) {
      int mid = low + (high - low) / 2;
      
      string string1 = LCP(strs, low, mid);
      string string2 = LCP(strs, mid+1, high);

      return LCPForPair(string1, string2);
    }
    return "";
  }
  string longestCommonPrefix(vector<string>& strs) {
    return LCP(strs, 0, strs.size());
  }
};

int main (int argc, char **argv) {
  Solution solution;
  vector<string> s;
  s.push_back("flower");
  s.push_back("flight");
  s.push_back("flo");
  cout << solution.longestCommonPrefix(s) << endl;
  return 0;
}
