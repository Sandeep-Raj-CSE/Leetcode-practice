class Solution {
public:
    int upperBound(vector<int> &nums, int x){
        int ans = -1;
        int left = 0;
        int right = nums.size()-1;

        while(left <= right){
            int mid = left + (right - left)/2;

            if(nums[mid] > x){
                ans = mid;
                right = mid - 1;
            }else{
                left = mid + 1;
            }
        }
        return ans;
    }

    int lowerBound(vector<int> &nums, int x){
        int n = nums.size();
        int left = 0;
        int right = n-1;
        int ans = -1;

        while(left <= right){
            int mid = left + (right - left)/2;

            if(nums[mid] >= x){
                ans = mid;
                right = mid - 1;
            }else{
                left = mid + 1;
            }
        }
        return ans;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int lo = lowerBound(nums, target);  // First occurrence
        
        // If target not found
        if(lo == -1 || nums[lo] != target){
            return {-1, -1};
        }
        
        int up = upperBound(nums, target);  // First element > target
        int last = (up == -1) ? nums.size()-1 : up-1;  // Last occurrence
        
        return {lo, last};
    }
};
