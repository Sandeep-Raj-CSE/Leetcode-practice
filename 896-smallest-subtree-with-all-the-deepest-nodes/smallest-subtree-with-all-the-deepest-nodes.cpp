/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    unordered_set<TreeNode*> deepest_nodes;
    int max_depth = -1;

    void BFS(TreeNode* root) {
        queue<pair<TreeNode*, int>> q;
        q.push({root, 0});

        while (!q.empty()) {
            auto [node, depth] = q.front();
            q.pop();

            if (depth > max_depth) {
                max_depth = depth;
                deepest_nodes.clear();
            }

            if (depth == max_depth) {
                deepest_nodes.insert(node);
            }

            if (node->left) q.push({node->left, depth + 1});
            if (node->right) q.push({node->right, depth + 1});
        }
    }

    TreeNode* LCA(TreeNode* root) {
        if (!root || deepest_nodes.count(root)) return root;

        TreeNode* left = LCA(root->left);
        TreeNode* right = LCA(root->right);

        if (left && right) return root;

        return left ? left : right;
    }

    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        BFS(root);
        return LCA(root);
    }
};