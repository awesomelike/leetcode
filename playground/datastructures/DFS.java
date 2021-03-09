package playground.datastructures;

class DFS {
  public static void inorder(TreeNode root) {
    if (root == null) {
      return;
    }

    inorder(root.left);
    System.out.print(root.val + " ");
    inorder(root.right);
  }

  public static void preorder(TreeNode root) {
    if (root == null) {
      return;
    }

    System.out.print(root.val + " ");
    preorder(root.left);
    preorder(root.right);
  }

  public static void postorder(TreeNode root) {
    if (root == null) {
      return;
    }

    postorder(root.left);
    postorder(root.right);
    System.out.print(root.val + " ");
  }
}

class DFSMain {
  public static void main(String[] args) {
    TreeNode node = new TreeNode(1);
    node.left = new TreeNode(2);
    node.right = new TreeNode(3);
    node.left.left = new TreeNode(4);
    node.left.right = new TreeNode(5);
    node.right.right = new TreeNode(7);

    System.out.println("Inorder: ");
    DFS.inorder(node);
    System.out.println("\n");

    System.out.println("Preorder: ");
    DFS.preorder(node);
    System.out.println("\n");

    System.out.println("Postorder: ");
    DFS.postorder(node);
    System.out.println("\n");
  }
}
