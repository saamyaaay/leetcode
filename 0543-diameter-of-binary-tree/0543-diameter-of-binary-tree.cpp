class Solution {
public:
    int height(TreeNode* root) {
        if (root == nullptr) return 0;
        return 1 + max(height(root->left), height(root->right));
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if (root == nullptr) return 0;

        // Calculate the diameter passing through the root
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        int rootDiameter = leftHeight + rightHeight;

        // Calculate the diameter in the left and right subtrees
        int leftDiameter = diameterOfBinaryTree(root->left);
        int rightDiameter = diameterOfBinaryTree(root->right);

        // The largest of the three is the final answer
        return max(rootDiameter, max(leftDiameter, rightDiameter));
    }
};