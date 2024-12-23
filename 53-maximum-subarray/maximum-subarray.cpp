class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        if(nums.size() == 1){
            return nums[0];
        }
        int cs = 0;

        int ms = nums[0];

        for(int i=0; i<nums.size();i++){
            cs = cs + nums[i];

           

            ms = max(ms , cs);

             if(cs < 0){
                cs = 0;
            }
        }

        return ms;
    }
};