class Solution {
public:
    int singleNumber(vector<int>& nums) {


        // using unordered map

        unordered_map<int,int>mp;

        for(int i=0; i<nums.size();i++){

            mp[nums[i]]++;
        }



        for(int i=0; i<nums.size();i++){
            int key=nums[i];

            auto temp=mp.find(key);


            if(temp->second==1){
                return key;
            }
        }

        return -1;
        
    }
};