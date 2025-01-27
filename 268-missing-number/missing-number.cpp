class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // Binary search approach
        sort(nums.begin(), nums.end()); // Ensure the array is sorted

        int start = 0;
        int end = nums.size() - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            // Check if the current index matches the value
            if (nums[mid] == mid) {
                start = mid + 1; // Missing number is in the right half
            } else {
                end = mid - 1; // Missing number is in the left half
            }
        }

        // After the loop, 'start' points to the missing number
        return start;
    }
};
