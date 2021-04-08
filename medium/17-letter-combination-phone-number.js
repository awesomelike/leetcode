/**
 * @param {string} digits
 * @return {string[]}
 */
 var letterCombinations = function(digits) {
  
  if (!digits.length) return [];
  
  const map = {
    1: "",
    2: "abc",
    3: "def",
    4: "ghi",
    5: "jkl",
    6: "mno",
    7: "pqrs",
    8: "tuv",
    9: "wxyz"
  };
  
  function solve(i, digits, cur, answer) {
    if (i == digits.length) {
      return answer.push(cur);
    }
    const digit = parseInt(digits[i], 10);
    
    for (let k = 0; k < map[digit].length; k++) {
      solve(i+1, digits, cur + map[digit][k], answer);
    }
  }
  
  const answer = [];
  solve(0, digits, "", answer);
  return answer;
  
};