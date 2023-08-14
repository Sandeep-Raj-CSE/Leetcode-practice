class Solution {
public:
    int removeElement(vector<int>& nums, int v) {

      int index=0;
      

        for(int i=0; i<nums.size();i++){
            if(nums[i]!=v){
               nums[index]=nums[i];
               index++;
            }
        }

        return index;
        
    }
};