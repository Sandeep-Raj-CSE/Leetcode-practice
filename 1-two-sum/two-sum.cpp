class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> mp;

        for(int i=0; i<nums.size();i++)
        {

            int need = nums[i];

            int more = target - need;

            if(mp.find(more) != mp.end()){
                return {mp[more],i};
            }


            mp[need] = i;

        }


        return {-1,-1};
        
    }
};