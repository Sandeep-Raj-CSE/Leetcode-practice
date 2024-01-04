class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int> mp;
        // test case 1
        // 2 ->4
        //3 -> 3
        //4 ->2
        for(auto& n:nums){
            mp[n]++; 
        }

        // let me any element freq is 1 then return -1 bec
        // we can't delete 
        int ans=0;
    

        for(auto &m:mp){

            int freq=m.second;

            if(freq==1) return -1;

            // lets take another example

            ans=ans+ceil((double)freq/3);

        }


        return ans;



    }
};