public class Solution {
    private int preorderIndex = 0;
    private HashMap<Integer, Integer> inorderMap = new HashMap<>();

    public TreeNode buildTree(int[] preorder, int[] inorder) {
        // Populate the hashmap to quickly find the root position in inorder traversal
        for (int i = 0; i < inorder.length; i++) {
            inorderMap.put(inorder[i], i);
        }
        return buildTreeRecursive(preorder, 0, inorder.length - 1);
    }

    private TreeNode buildTreeRecursive(int[] preorder, int inorderStart, int inorderEnd) {
        // Base case: if no elements to construct the subtree
        if (inorderStart > inorderEnd) {
            return null;
        }

        // Get the current root value from preorder traversal
        int rootValue = preorder[preorderIndex++];
        TreeNode root = new TreeNode(rootValue);

        // Get the index of the root value in inorder traversal
        int inorderIndex = inorderMap.get(rootValue);

        // Recursively build the left and right subtrees
        root.left = buildTreeRecursive(preorder, inorderStart, inorderIndex - 1);
        root.right = buildTreeRecursive(preorder, inorderIndex + 1, inorderEnd);

        return root;
    }

    // Utility function to print the tree in order (for verification)
    public void printInOrder(TreeNode root) {
        if (root != null) {
            printInOrder(root.left);
            System.out.print(root.val + " ");
            printInOrder(root.right);
        }
    }
}