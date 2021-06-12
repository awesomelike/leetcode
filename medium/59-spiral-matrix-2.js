/**
 * @param {number} n
 * @return {number[][]}
 */
var generateMatrix = function(n) {
  // Initialize empty nxn matrix 
  const matrix = [];
  for (let i = 0; i < n; i++) matrix[i] = [];
  const data = [];
  for (let i = 1; i <= n * n; i++) data[i-1] = i;
  let k = 0;

  let direction = 1;
  let top = 0;
  let left = 0
  let right = n - 1;
  let bottom = n - 1;
  while (top !== bottom + 1 && left !== right + 1) {
    if (direction === 1) {
      for (let i = left; i <= right; i++) {
        matrix[top][i] = data[k++];
      }
      top++;
      direction = 2;
      continue;
    }
    if (direction === 2) {
      for (let i = top; i <= bottom; i++) {
        matrix[i][right] = data[k++];
      }
      right--;
      direction = 3;
      continue;
    }
    if (direction === 3) {
      for (let i = right; i >= left; i--) {
        matrix[bottom][i] = data[k++];
      }
      bottom--;
      direction = 4;
      continue;
    }
    if (direction === 4) {
      for (let i = bottom; i >= top; i--) {
        matrix[i][left] = data[k++];
      }
      left++;
      direction = 1;
      continue;
    }
  }
  return matrix;
};