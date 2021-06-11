/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number[][]}
 */
 var zigzagLevelOrder = function(root) {
  if (root === null) {
    return [];
  }
  const answer = [];

  const queue = [];
  queue.push(root);
  
  let fromRight = false;
  
  while (queue.length) {
    let temp = [];
    const oldSize = queue.length;
    for (let i=0; i < oldSize; i++) {
      const node = queue.shift();
      if (fromRight) {
        temp.unshift(node.val);
      } else {
        temp.push(node.val);
      }
      if (node.left !== null) {
        queue.push(node.left);
      }
      if (node.right !== null) {
        queue.push(node.right);
      }
    }
    answer.push(temp);
    fromRight = !fromRight;
  }
  return answer;
};