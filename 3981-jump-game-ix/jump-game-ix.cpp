class Solution {
public:
    vector<int> maxValue(vector<int>& nums) {
        int n = nums.size();

        vector<int> result(n);

        // Step 1: Build prefix maximum
        vector<int> prefixMax(n);
        prefixMax[0] = nums[0];

        for (int i = 1; i < n; ++i) {
            prefixMax[i] = max(prefixMax[i - 1], nums[i]);
        }

        // Step 2: Traverse from right to left
        int suffixMin = INT_MAX;

        for (int i = n - 1; i >= 0; --i) {

            // Connected to future indices
            if (prefixMax[i] > suffixMin) {
                result[i] =
                    (i + 1 < n) ? result[i + 1] : prefixMax[i];
            } else {
                result[i] = prefixMax[i];
            }

            // Update suffix minimum
            suffixMin = min(suffixMin, nums[i]);
        }

        return result;
    }
};