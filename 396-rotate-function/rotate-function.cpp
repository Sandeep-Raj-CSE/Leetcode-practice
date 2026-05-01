class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
           int n = nums.size();
        
        // Step 1: calculate sum of array
        int sum = accumulate(nums.begin(), nums.end(), 0);
        
        // Step 2: calculate F(0)
        int f0 = 0;
        for (int i = 0; i < n; i++) {
            f0 += i * nums[i];
        }
        
        int maxVal = f0;
        int curr = f0;
        
        // Step 3: use relation to compute next values
        for (int k = 1; k < n; k++) {
            curr = curr + sum - n * nums[n - k];
            maxVal = max(maxVal, curr);
        }
        
        return maxVal;
    }
};