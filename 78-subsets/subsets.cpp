class Solution {
public:
    void solve(vector<int>&nums , vector<vector<int>>&ans, vector<int>&res, int ind)
    {

        if(ind == nums.size())
        {
            ans.push_back(res);
            return;

        }

        res.push_back(nums[ind]);

        // 

        solve(nums, ans, res, ind+1);


        res.pop_back();


        solve(nums,ans,res,ind+1);




    }
    vector<vector<int>> subsets(vector<int>& nums) {

        // now 

        vector<vector<int>>ans;
        vector<int>res;

        int n = nums.size();

        solve(nums, ans, res , 0 );

        return ans;
        
    }
};