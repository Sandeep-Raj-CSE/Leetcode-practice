class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // set<vector<int>>s;
        // int n= nums.size();
        // // take thre nested loop 
        // // check condition  in given question
        // // phir jo value se condition se satisfy hi jaye usko store karp
        // // phir set me daal do taki sorted order me aa jaye
        // // Thats gives Tle 
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=i+1;j<n;j++)
        //     {
        //         for(int k=j+1;k<n;k++)
        //         {
        //             if(nums[i]+nums[j]+nums[k]==0)
        //             {
        //                 vector<int>v(3);
        //                 v[0]=nums[i];
        //                 v[1]=nums[j];
        //                 v[2]=nums[k];
        //                 sort(v.begin(),v.end());
        //                 // ans in sorted order
        //                 s.insert(v);
        //             }
        //         }
        //     }
        // }
        // vector<vector<int>>v;
        // for(auto i:s)
        // {
        //     v.push_back(i);
        // }
        // return v;

        // two pointer approch
        
        
        vector<vector<int>> ans;
        
        if(nums.size() < 3) return ans;
        
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < nums.size()-2; i++){            
            
            if(i == 0 || nums[i-1] != nums[i]){
                
                int low = i+1, high = nums.size()-1, sum = -nums[i];
                
                while(low < high){
                    if(nums[low] + nums[high] == sum){
                        
                        ans.push_back({nums[i], nums[low], nums[high]});
                        
                        while(low < high && nums[low] == nums[low+1])
                         low++;
                                               
                          while(low < high && nums[high] == nums[high-1])  
                         high--;
                          low++;
                          high--;
                      }
                      
                      else if(nums[low] + nums[high] < sum){
                          low++;
                      }
                      else{
                          high--;
                      }
                  }                
              }
          }
          return ans;
      
    }
};
        
    