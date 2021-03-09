#include <bits/stdc++.h>

class Solution {
public:
    unordered_map<char, int> ransomOccurs;
    unordered_map<char, int> magazineOccurs;
    vector<char> magazineKeys;
    bool canConstruct(string ransomNote, string magazine) {
        for(auto x: ransomNote) {
            ransomOccurs[x]++;
        }
  for(auto x: magazine) {
    magazineOccurs[x]++;
  }
  for(auto x: magazineOccurs) {
    magazineKeys.push_back(x.first);
  }
  for(auto x: ransomOccurs) {    
    if(find(magazineKeys.begin(), magazineKeys.end(), x.first) == magazineKeys.end() || x.second > magazineOccurs[(char)x.first]) {
        return false;
      }
  }
  return true;
    }
};