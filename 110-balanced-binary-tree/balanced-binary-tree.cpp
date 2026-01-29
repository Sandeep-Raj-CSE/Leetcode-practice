class Solution {
public:
    // Helper function to calculate height of a tree
    int height(TreeNode* root) {
        // Base case: if root is null, height is 0
        if (root == nullptr) return 0;
        // Height = 1 + max height of left and right subtrees
        return 1 + max(height(root->left), height(root->right));
    }

    // Function to check if the tree is balanced
    bool isBalanced(TreeNode *root) {
        // Base case: an empty tree is balanced
        if (root == nullptr) return true;

        // Find the height of left and right subtrees
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);

        // Check if current node is balanced
        if (abs(leftHeight - rightHeight) > 1) return false;

        // Recursively check if left and right subtrees are balanced
        return isBalanced(root->left) && isBalanced(root->right);
    }
};