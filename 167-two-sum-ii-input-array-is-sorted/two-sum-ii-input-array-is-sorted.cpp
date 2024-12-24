class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        // using BS

        for(int i=0; i<nums.size();i++){

            int l = i+1;
            int r= nums.size()-1;

            int temp = target - nums[i];

            while(l<=r)
            {
                int mid = l + (r - l)/2;

                if(nums[mid] == temp){
                    return {i+1, mid +1};
                }else if(nums[mid] < temp){
                    l = mid +1;
                }else{
                    r = mid -1;
                }

            }
        }
        return {};
    }
};