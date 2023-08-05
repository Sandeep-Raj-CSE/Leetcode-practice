class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans;

        // idea make the store variable
        // run the loop to size

        // and store val of nums[i]*nums[i]

        // push the val in ans

        // sort the ans

        // return ans

        for(int i=0; i<nums.size();i++){
            int val= nums[i]*nums[i];
            ans.push_back(val);
        }
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};