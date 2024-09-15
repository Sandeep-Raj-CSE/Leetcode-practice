class Solution {
public:

    void solve(int ind, int target , vector<int>&arr, vector<vector<int>>&ans , vector<int> &ds)
    {

        // s

        if(ind == arr.size()){
            if(target == 0){
                ans.push_back(ds);
               
            }
             return ;
        }


        // pick case 

        if(arr[ind] <= target){
            ds.push_back(arr[ind]);

            solve(ind, target - arr[ind] , arr , ans, ds);
            ds.pop_back();
        }


        // not pick

        solve(ind+1, target , arr,ans,ds);




    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {


        vector<vector<int>>ans;
        vector<int>ds;


        solve(0, target , candidates , ans , ds );
        return ans;
        
    }
};