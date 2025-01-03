class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        
        long long leftsum = 0;

        long long rightsum = 0;

       for(int i : nums){
        rightsum += i;
       }

        int ans =0;

        for(int i=0; i<nums.size()-1;i++){

            leftsum = leftsum + nums[i];

            rightsum = rightsum - nums[i];


            if(leftsum >= rightsum){
                ans++;
            }
        }

        return ans;
    }
};