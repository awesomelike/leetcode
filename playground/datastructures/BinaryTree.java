package playground.datastructures;

import java.util.LinkedList;
import java.util.Queue;

public class BinaryTree {
  TreeNode root;

  public BinaryTree () {
    root = null;
  }
  
  public void levelOrderBFS() {
    Queue<TreeNode> queue = new LinkedList<TreeNode>();
    queue.add(root);

    while (!queue.isEmpty()) {
      TreeNode temp = queue.remove();
      System.out.print(temp.val + " ");

      if (temp.left != null) {
        queue.add(temp.left);
      }
      if (temp.right != null) {
        queue.add(temp.right);
      }
    }
  }

  public int height(TreeNode root) {
    if (root == null) {
      return 0;
    }
    
    int leftHeight = height(root.left);
    int rightHeight = height(root.right);

    if (leftHeight >= rightHeight) {
      return leftHeight + 1;
    } else return rightHeight + 1;
  }

  public int fullHeight() {
    return this.height(this.root);
  }
}

class BinaryTreeMain {
  public static void main(String[] args) {
    BinaryTree tree = new BinaryTree();
    tree.root = new TreeNode(1);
    tree.root.left = new TreeNode(2);
    tree.root.right = new TreeNode(3);
    tree.root.right.right = new TreeNode(4);
    tree.root.right.right.right = new TreeNode(5);
    tree.root.right.right.right.right = new TreeNode(7);
    
    System.out.println("Full height " + tree.fullHeight());
    
    System.out.println("BFS traversaln\n");
    tree.levelOrderBFS();
    
  }
}
