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
  public List<List<Integer>> pathSum(TreeNode root, int targetSum) {
    List<List<Integer>> answer = new ArrayList<>();
    
    solve(root, targetSum, new ArrayList<Integer>(), answer);
    
    return answer;
  }
  
  void solve(TreeNode root, int sum, List<Integer> cur, List<List<Integer>> answer) {
    if (root == null) {
      return;
    }
    
    cur.add(root.val);
    if (root.val == sum && root.left == null && root.right == null) {
      answer.add(new ArrayList<>(cur));
    } else {
      solve(root.left, sum - root.val, cur, answer);
      solve(root.right, sum - root.val, cur, answer);  
    }
    
    cur.remove(cur.size() - 1);
  }
}