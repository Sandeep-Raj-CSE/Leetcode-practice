class Solution {
public:
    int findMin(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());

        int ans=nums[0];
        return ans;
    }
};