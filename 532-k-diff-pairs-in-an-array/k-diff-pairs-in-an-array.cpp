class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        // sort the array

        sort(nums.begin(), nums.end());
        set<pair<int,int>>st;

        // diff nums[i]- nums[j] == k tehn

        int i=0;
        int j= 1;

    
        while(j<nums.size()){

            if(nums[j]-nums[i] == k){
                st.insert({nums[i],nums[j]});
                i++;
                j++;
            }else if(nums[j]-nums[i] > k){
                i++;
            }else{
                j++;
            }

            if(i==j){
                j++;
            }
        }

      return st.size();
    }
};