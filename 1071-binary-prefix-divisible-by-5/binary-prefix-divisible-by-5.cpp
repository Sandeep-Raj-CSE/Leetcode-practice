class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        int currNum = 0;

        vector<bool>ans;

        for(int i=0; i<nums.size();i++){
            currNum = (( currNum << 1) +  nums[i]) % 5;

            ans.emplace_back(currNum == 0);
        }

        return ans;
    }
};