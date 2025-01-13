class Solution {
public:
    int singleNumber(vector<int>& nums) {

        // by map data structur


        int ans=0;

         for(int i=0; i<nums.size();i++){
            ans = ans ^ nums[i];
         }


         return ans;
        
    }
};