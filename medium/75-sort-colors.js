/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var sortColors = function(nums) {
  let c0 = 0;
  let c1 = 0;
  let c2 = 0;
  nums.forEach(num => {
    if (num === 0) return c0++;
    if (num === 1) return c1++;
    if (num === 2) return c2++;
  });

  for (let i=0; i<nums.length; i++) {
    const num = nums[i];
    if (c0 !== 0)  {
      nums[i] = 0;
      c0--;
      continue;
    }
    if (c1 !== 0) {
      nums[i] = 1;
      c1--;
      continue;
    }
    if (c2 !== 0) {
      nums[i] = 2;
      c2--;
      continue;
    }
  }
};