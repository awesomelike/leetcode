/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
 var isAnagram = function(s, t) {
  if (s === "" || t === "") return true;
  if (s.length !== t.length) return false;
  
  const map = {};
  for (let i=0; i<s.length; i++) {
    const l = s[i];
    if (!map[l]) map[l] = 0;
    map[l]++;
  }
  for (let i=0; i<t.length; i++) {
    const l = t[i];
    if (map[l]) {
      map[l]--;
      if (map[l] === 0) {
        delete map[l];
      }
    } 
  }
  return !Object.keys(map).length;
};