class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        
        // map laga ke freq count karo
        // size niklo / then usko 2 se bhaga do
        // jis element ka freq size/2 ho return kar do

        map<int,int> mp;
        for(int i=0; i<nums.size();i++){
            mp[nums[i]]++;
        }

        int check = nums.size()/2;

        for(auto i: mp){
            if(i.second == check){
                return i.first;
            }
        }

        return -1;

    }
};