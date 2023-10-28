class Solution {
public:
   void solve(vector<vector<int>>&ans,vector<int>&ds,int ind, vector<int>&arr,int k){
       if(k==0){
           ans.push_back(ds);
       }

       for(int i=ind;i<arr.size();i++){

           if(i > ind && arr[i]==arr[i-1])continue;

           if(arr[i]>k)break;

           ds.push_back(arr[i]);

           solve(ans,ds,i+1,arr,k-arr[i]);

           ds.pop_back();
       }
   }
    vector<vector<int>> combinationSum2(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        vector<int>ds;

        solve(ans,ds,0,arr,k);

        return ans;

    }
};