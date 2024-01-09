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
    void solve(TreeNode* root, vector<int>&v){

        if(root==NULL) return;

        if(root->left == NULL && root->right == NULL){
            v.push_back(root->val);
            return;
        }

        solve(root->left,v);
        solve(root->right,v);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>t1;
        vector<int>t2;
        solve(root1,t1);
        solve(root2,t2);

        if(t1.size() != t2.size()){
            return false;
        }

        for(int i=0; i<t1.size();i++){

            if(t1[i] != t2[i]){
                return false;
            }
        }

        return true;
    }
};