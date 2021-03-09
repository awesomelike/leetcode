import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.LinkedList;
import java.util.Queue;

class TreeNode {
  int val;
  TreeNode left;
  TreeNode right;
  TreeNode() {}
  TreeNode(int val) { this.val = val; }
    TreeNode(int val, TreeNode left, TreeNode right) {
      this.val = val;
      this.left = left;
      this.right = right;
    }
  }

  class Solution {
    public List<Double> averageOfLevels(TreeNode root) {
      if (root == null) {
        return Collections.emptyList();
      }
      List<Double> answer = new ArrayList<Double>();
      
      double sum = 0;
      Queue<TreeNode> queue = new LinkedList<TreeNode>();
      queue.add(root);
      
      while(!queue.isEmpty()) {
        int size = queue.size();
  
        for (int i=0; i<size; i++) {
          TreeNode node = queue.poll();
          sum += node.val;
  
          if (node.left != null) {
            queue.add(node.left);
          }
          if (node.right != null) {
            queue.add(node.right);
          }
        }
        answer.add(sum / size);
        sum = 0;
      }
  
      return answer;
    }
  }