class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        int count = 0;

        while (nums.size() > 1) {
            bool sorted = true;
            int mnSum = INT_MAX, idx = -1;

            for (int i = 0; i < nums.size() - 1; i++) {
                if (nums[i] > nums[i + 1])
                    sorted = false;

                int sum = nums[i] + nums[i + 1];
                if (sum < mnSum) {
                    mnSum = sum;
                    idx = i;
                }
            }

            if (sorted)
                break;

            nums[idx] = mnSum;
            nums.erase(nums.begin() + idx + 1);
            count++;
        }

        return count;
    }
};