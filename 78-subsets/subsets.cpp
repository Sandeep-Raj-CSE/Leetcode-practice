class Solution {
public:


     void solve( vector<int>&nums , int ind ,vector<vector<int>> &res, vector<int>&ans )
     {

        if(ind == nums.size()){
            res.push_back(ans);
            return;
        }


        ans.push_back(nums[ind]);

        // take 

        solve(nums,ind+1, res , ans);

        // 



        ans.pop_back();


        // not pick

        solve(nums,ind+1,res, ans);




     }
    vector<vector<int>> subsets(vector<int>& nums) {


        vector<vector<int>> res;

        vector<int> ans;

        solve(nums , 0 , res , ans);

        return res;


        
    }
};