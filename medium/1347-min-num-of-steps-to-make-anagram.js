/**
 * @param {string} s
 * @param {string} t
 * @return {number}
 */
 var minSteps = function(s, t) {
  const ms = {};
  for (let i=0; i<s.length; i++) {
    if (!ms[s[i]]) {
      ms[s[i]] = 0;
    } 
    ms[s[i]]++;
  }
  
  let diff = 0;
  for (let i=0; i<t.length; i++) {
    if (!ms[t[i]]) {
      ms[t[i]] = 0;
    }
    if (ms[t[i]] > 0) {
      ms[t[i]]--;
    } else {
      diff++;
    }
  }
  return diff;
};

console.log(minSteps("bab", "aba"));