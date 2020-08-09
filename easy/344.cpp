/*
  Link: https://leetcode.com/problems/reverse-string/
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  void reverseString(vector<char>& s) {
    int l = s.size();
    
    for (int i=0; i<l/2; i++) {
      int temp = s[i];
      s[i] = s[l-i-1];
      s[l-i-1] = temp;
    }
  }
};

int main () {
  vector<char> v = { 'a', 'z', 'a', 'm', 'a', 't' };

  Solution s;
  s.reverseString(v);
  for (int i=0; i<v.size(); i++) {
    cout << v[i];
  }
  cout << endl;

  return 0;
}