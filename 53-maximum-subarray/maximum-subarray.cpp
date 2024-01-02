class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int sum=0;
        int mxi=nums[0];

        for(auto it:nums){
            sum=sum+it;
            mxi=max(sum,mxi);

            if(sum<0)sum=0;
        }


        return mxi;
    }
};