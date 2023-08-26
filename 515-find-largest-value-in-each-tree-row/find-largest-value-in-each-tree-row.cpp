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
    vector<int> largestValues(TreeNode* root) {
        // simply using level order traversal
        // after each level find the max value in thats level

        vector<int>ans;

        if(root==NULL) return ans ;

        int maxi;
        int level;

        TreeNode* p;
        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
            level=q.size();
            maxi=INT_MIN;

            while(level--){
                p=q.front();
                q.pop();

                maxi=max(maxi,p->val);
                if(p->left!=NULL)q.push(p->left);
                if(p->right!=NULL)q.push(p->right);
            }
            ans.push_back(maxi);
        }


        return ans;

    }
};