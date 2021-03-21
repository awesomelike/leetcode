/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
  boolean helper(TreeNode root, int cur, int sum) {
    if (root == null) return false;     
    
    cur += root.val;
    
    if (cur == sum && root.left == null && root.right == null) {
      return true;
    }
    
    return helper(root.left, cur, sum) || helper(root.right, cur, sum);
  }
  public boolean hasPathSum(TreeNode root, int targetSum) {
    if (root == null) return false;
    return helper(root, 0, targetSum);
  }
}