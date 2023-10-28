class Solution {
public:
void solve(vector<vector<int>>&ans,vector<int>&ds,int i,vector<int>&arr, int k){

    if(i==arr.size()){
        if(k==0){
            ans.push_back(ds);
        }

        return;
    }

    // pick the element
    if(arr[i] <=k){
        ds.push_back(arr[i]);
        solve(ans,ds,i,arr,k-arr[i]);
        ds.pop_back();
    }

    // not pick
    solve(ans,ds,i+1,arr,k);

}
    vector<vector<int>> combinationSum(vector<int>& arr, int k) {
        vector<vector<int>>ans;
        vector<int>ds;
        solve(ans,ds,0,arr,k);
        return ans;
    }
};