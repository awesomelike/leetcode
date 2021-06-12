/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
 var numberOfSubarrays = function(nums, k) {
  let ans = 0;
  let i = 0;
  let count = 0;

  for (let j = 0; j < nums.length; j++) {
    if (nums[j] % 2 === 1) {
      --k;
      count = 0;
    }
    while (k === 0) {
      k += nums[i++] & 1;
      ++count;
    }
    ans += count;
  }
  return ans;
};
