/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number}
 */
 const insertPosition = (arr, num) => {
  let l = 0;
  let r = arr.length - 1;
  
  let mid;
  while (l <= r) {
    mid = l + parseInt((r-l)/2, 10);
    if (arr[mid] === num) {
      return mid;
    } else if (num < arr[mid]) {
      r = mid - 1;
    } else if (num > arr[mid]) {
      l = mid + 1;
    }
  }
  
  return r + 1;
}

var findMedianSortedArrays = function(nums1, nums2) {
  nums2.forEach((num) => {
    nums1.splice(insertPosition(nums1, num), 0, num);
  });
 
  const merged  = nums1;
  const l = merged.length;
  
  // if odd length
  if (l & 1) {
    return merged[(l-1) / 2];
  }
  
  const left = parseInt((l-1)/2, 10);
  const right = left + 1;

  return (merged[left] + merged[right]) / 2;
};