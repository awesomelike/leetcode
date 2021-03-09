package playground.datastructures;

public class Main {
  public static void main(String[] args) {
    TreeNode node = new TreeNode(1);
    node.left = new TreeNode(2);
    node.right = new TreeNode(3);

    DFS.inorder(node);
  }
}
