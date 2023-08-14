class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        map<int,int>mp;
        int k=0;
        vector<int>v;
        for(int i=0; i<nums.size();i++)
        {
            mp[nums[i]]++;

        }
        for(auto it:mp){
            if(it.second>2){
                for(int i=0;i<2;++i) v.push_back(it.first);
            }else{
                for(int i=0;i<it.second;++i) v.push_back(it.first);
            }
        }
        int i=0;
        for(auto it:v) nums[i++]=it;
        return v.size();


    }
};



