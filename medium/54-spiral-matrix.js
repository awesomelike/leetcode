/**
 * @param {number[][]} matrix
 * @return {number[]}
 */
 var spiralOrder = function(matrix) {
  const a = [];
  let i = 0;

  const m = matrix.length;
  const n = matrix[0].length;
  
  let direction = 1; // 1:right, 2:bottom, 3:left, 4:up 
  
  let top = 0;
  let left = 0;
  let right = n - 1;
  let bottom = m - 1;
  while (top !== bottom + 1 && left !== right + 1) {
    if (direction === 1) {
      for (let k = left; k <= right; k++) {
        a[i++] = matrix[top][k];
      }
      direction = 2;
      top += 1;
      continue;
    }
    if (direction === 2) {
      for (let k = top; k <= bottom; k++) {
        a[i++] = matrix[k][right];
      }
      direction = 3;
      right -= 1;
      continue;
    }
    if (direction === 3) {
      for (let k = right; k >= left; k--) {
        a[i++] = matrix[bottom][k];
      }
      direction = 4;
      bottom -= 1;
      continue;
    }
    if (direction === 4) {
      for (let k = bottom; k >= top; k--) {
        a[i++] = matrix[k][left];
      }
      direction = 1;
      left += 1;
      continue;
    }
  }
  return a;
};