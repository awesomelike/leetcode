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
  void inorder(TreeNode root, List<Integer> answer) {
    if (root.left != null) {
      inorder(root.left, answer);  
    }
    
    answer.add(root.val);
    
    if (root.right != null) {
      inorder(root.right, answer);  
    }
  }
  public List<Integer> inorderTraversal(TreeNode root) {
    List<Integer> answer = new LinkedList();  
    if (root == null) return answer;
    inorder(root, answer);
    return answer;
  }
}