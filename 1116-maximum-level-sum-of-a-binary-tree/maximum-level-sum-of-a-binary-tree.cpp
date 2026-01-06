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
    int maxLevelSum(TreeNode* root) {

        int maxSum = INT_MIN;
        int reslvl = 0;

        queue<TreeNode*> que;
        que.push(root);

        int currLvl = 1;

        while(!que.empty()){
            
            int n = que.size();
            int sum = 0;

            while(n--){
                TreeNode* tmp = que.front();
                que.pop();

                sum = sum + tmp->val;

                if(tmp->left){
                    que.push(tmp->left);
                }

                if(tmp->right){
                    que.push(tmp->right);
                }

            }

            if(sum > maxSum){
                maxSum = sum;
                reslvl = currLvl;
            }
            currLvl ++;
        }


        return reslvl;
    }
};