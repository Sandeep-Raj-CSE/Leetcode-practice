class Solution {
public:

    int first(vector<int>&nums , int target){
        int start = 0;
        int end = nums.size()-1;
        int ans = -1;

        while(start <= end){
            int mid = start + (end - start)/2;

            if(nums[mid] == target){
                ans = mid;
                end = mid -1;
            }else if(nums[mid] > target){
                end = mid-1;
            }else{
                start = mid +1;
            }
        }
        return ans;
    }


    int last(vector<int>&nums , int target){
        int start = 0;
        int end = nums.size()-1;
        int ans = -1;

        while(start <= end){
            int mid = start + (end - start)/2;

            if(nums[mid] == target){
                ans = mid;
                start = mid + 1;
            }else if(nums[mid] > target){
                end = mid-1;
            }else{
                start = mid +1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<vector<int>>ans;
 
        int res1 = first(nums,target);
        int res2=  last(nums, target);

       

        return {res1, res2};
        

         

    }
};