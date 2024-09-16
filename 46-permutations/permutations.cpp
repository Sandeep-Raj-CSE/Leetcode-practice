class Solution {
public:


    //  void solve(vector<int>&ds, vector<int>&nums , vector<vector<int>>&ans, int freq[] ){

    //     if(ds.size() == nums.size()){
    //         ans.push_back(ds);
    //         return ;
    //     }


    //     for(int i=0; i<nums.size();i++){
    //         if(!freq[i]){
    //             ds.push_back(nums[i]);
    //             freq[i]=1;
    //             solve(ds,nums,ans,freq);
    //             freq[i]=0;
    //             ds.pop_back();
    //         }
    //     }

    //  }


    void solve(int ind, vector<int>&nums ,vector<vector<int>>&ans ){
        if(ind ==nums.size()){
            ans.push_back(nums);
            return;
        }


        for(int i=ind; i<nums.size();i++){
            swap(nums[ind],nums[i]);
            solve(ind+1, nums , ans);
            swap(nums[ind] , nums[i]);
        }
    }


    vector<vector<int>> permute(vector<int>& nums) {

        vector<vector<int>>ans;
        vector<int>ds;

        // int freq[nums.size()];

        // for(int i=0; i<nums.size();i++){
        //     freq[i]=0;
        // }
        
        solve(0,nums,ans);
        return ans;
    }
};