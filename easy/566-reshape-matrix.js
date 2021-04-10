/**
 * @param {number[][]} nums
 * @param {number} r
 * @param {number} c
 * @return {number[][]}
 */
 var matrixReshape = function(nums, r, c) {
  const m = nums.length;
  const n = nums[0].length;
  
  if (m * n < r * c) {
    return nums;
  }
  const temp = [];
  for (a of nums) {
    for (e of a) {
      temp.push(e);
    }
  }

  const ans = [];
  for (let i=0; i<r; i++) {
    ans.push([]);
  }
  
  for (let i=0; i<r; i++) {
    for (let j=0; j<c; j++) {
      ans[i][j] = temp[i * c + j];
    }
  }
  
  return ans;
};

const matrixReshape2 = (nums, r, c) => {
  const m = nums.length;
  const n = nums[0].length;

  if (m * n < r * c) {
    return nums;
  }

  const answer = [];
  for (let i = 0; i < r * c; i++) {
    answer[i/c][i%c] = nums[i/n][i%n];
  }
  return answer;
};
