class Solution {
public:
    long long countOperationsToEmptyArray(vector<int>& nums) {
        
        long long cnt=1;

        int n=nums.size();

        vector<pair<int,int>>ans;

        for(int i=0; i<n;i++){
            ans.push_back({nums[i],i});
        }


        sort(ans.begin(),ans.end());


        int j=2;

        for(int i=n-2; i>=0;i--){

            if(ans[i].second > ans[i+1].second){
                cnt=cnt+j;
            }else{
                cnt=cnt+1;
            }

            j=j+1;
        }


        return cnt;
    }
};