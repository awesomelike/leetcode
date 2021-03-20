class Solution {
public:
  vector<string> hash {"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
  void dp(int i, string dig, string curr, vector<string>& ans)
  {
    if(i == dig.size())
      return ans.push_back(curr);
    int digit = dig[i]-'0';
    for(int k = 0; k < hash[digit-2].size(); k++)
      dp(i+1, dig, curr + hash[digit-2][k], ans);
  }
  vector<string> letterCombinations(string digits) {
    vector<string> ans;
    if(digits.size() == 0) return ans;
    dp(0, digits, "", ans);
    return ans;
  }
};
