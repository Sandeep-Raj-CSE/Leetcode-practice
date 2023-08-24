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
    int findBottomLeftValue(TreeNode* root) {

        //level Order Travresal

        vector<int>ans;
        queue<TreeNode*>q;
        q.push(root);
        if(root==NULL)return 0;

        while(!q.empty()){
            int size=q.size();

            if(size==0)
            break;
            int count=0;
            while(size > 0){
                TreeNode* temp=q.front();

                q.pop();

                if(count == 0){
                    ans.push_back(temp->val);
                }


                if(temp->left!=NULL)q.push(temp->left);

                if(temp->right!=NULL)q.push(temp->right);

                size--;
                count++;
            }
        }


        return ans[ans.size()-1];


        
    }
};