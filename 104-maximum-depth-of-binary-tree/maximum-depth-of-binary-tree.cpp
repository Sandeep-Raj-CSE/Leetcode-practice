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
    int maxDepth(TreeNode* root) {

       int ans = 0;

       if(root == NULL) return ans;

       queue<TreeNode*>q;


       q.push(root);


       while(!q.empty()){

          int sz = q.size();
           ans++;

          for(int i= 0; i<sz;i++){
            auto node = q.front();
            q.pop();

           


            if(node -> left != NULL){
                q.push(node->left);
            }



            if(node -> right != NULL){
                q.push(node->right);
            }
          }
        
       }

       return ans;
        
    }
};