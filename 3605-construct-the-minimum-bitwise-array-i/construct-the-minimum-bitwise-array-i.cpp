class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans;
        for (int num : nums) {
            if (num == 2) {
                ans.push_back(-1);
                continue;
            }

            int trailingOnes = 0;
            int temp = num;
            while ((temp & 1)) {
                trailingOnes++;
                temp >>= 1;
            }

            ans.push_back(num ^ (1 << (trailingOnes - 1)));
        }
        return ans;
    }
};