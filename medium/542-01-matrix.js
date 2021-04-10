/**
 * @param {number[][]} matrix
 * @return {number[][]}
 */
 var updateMatrix = function(matrix) {
  if (!matrix.length) return [];
  
  const m = matrix.length;
  const n = matrix[0].length;
  
  const answer = [];
  for (let i = 0; i < m; i++) {
    const second = [];
    for (let j = 0; j < n; j++) {
      second.push(Number.MAX_SAFE_INTEGER);
    }
    answer.push(second);
  }
  
  for (let i=0; i<m; i++) {
    for (let j=0; j<n; j++) {
      if (matrix[i][j] === 0) {
        answer[i][j] = 0;
      } else {
        if (i > 0) {
          answer[i][j] = Math.min(answer[i][j], answer[i-1][j] + 1);
        }
        if (j > 0) {
          answer[i][j] = Math.min(answer[i][j], answer[i][j-1] + 1);
        }
      }
    }
  }
  
  for (let i=m-1; i>=0; i--) {
    for (let j=n-1; j>=0; j--) {
      if (i < m - 1) {
        answer[i][j] = Math.min(answer[i][j], answer[i+1][j] + 1);
      }
      if (j < n - 1) {
        answer[i][j] = Math.min(answer[i][j], answer[i][j+1] + 1);
      }
    }
  }
  
  return answer;
};