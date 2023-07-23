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

     unordered_map<int, vector<TreeNode*>> mp;
    vector<TreeNode*> sandeep(int n){
        

        if(n==1){
            vector<TreeNode*> te;
            TreeNode* root = new TreeNode(0);
            te.push_back(root);
            return te;
        }

        if(n==0){
            vector<TreeNode*> te;
            return te;
        }

        if(mp.find(n)!=mp.end()) 
        return mp[n];

        vector<TreeNode*> ans;

        for(int i=0;i<n;i+=1){
            vector<TreeNode*> le = sandeep(i);
            vector<TreeNode*> ri = sandeep(n-i-1);

            int x = le.size(), y = ri.size();
            for(int j=0;j<x;j+=1){
                for(int k=0;k<y;k+=1){
                    TreeNode* te = new TreeNode(0);
                    te->left = le[j];
                    te->right = ri[k];
                    ans.push_back(te);
                }
            }
        }
        return mp[n] = ans;
    }
    vector<TreeNode*> allPossibleFBT(int n) {
        vector<TreeNode*> ans;
        // if  n is even not possible to generate the tree
        if(n%2==0){
            return ans;
        }
        return sandeep(n);
        
    }
};