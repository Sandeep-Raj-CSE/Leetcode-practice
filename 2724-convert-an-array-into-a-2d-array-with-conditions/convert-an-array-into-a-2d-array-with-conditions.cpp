class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        map<int,int>mp;
        
        // store the freq of each element
        
        for(auto m:nums){
            
            mp[m]++;

        }
       // vector<vector<int>>res;
        
        int ans=0;
        // find the size of 2d array to which element has maximum freq 
        for(auto m:mp){
            if(m.second>ans)
                ans=m.second;

        }
        
         vector<vector<int>>res(ans);
        
        
        for(int i=0; i<ans;i++){
            
            for(auto m:mp){
                
                if(m.second>0){
                    res[i].push_back(m.first);
                   
                    mp[m.first]--;
                     
                }

            }

        }
        //cout<<res<<" ";

        return res;
    }
};