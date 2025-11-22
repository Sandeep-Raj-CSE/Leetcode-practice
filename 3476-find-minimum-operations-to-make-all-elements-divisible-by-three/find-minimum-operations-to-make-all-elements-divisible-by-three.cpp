class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        
        int ans = 0;

        for(int i:nums){
            int rem = i%3;
            if(rem != 0){
                ans ++;
            }
        }

        return ans;
    }
};