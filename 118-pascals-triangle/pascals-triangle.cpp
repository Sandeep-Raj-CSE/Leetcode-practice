class Solution {
public:
    vector<vector<int>> generate(int n) {
        
      if(n==1)
        return{{1}};
      if(n==2)
        return{{1},{1,1}};
      
      vector<vector<int>>v;
      v.push_back({1});
      v.push_back({1,1});
      
      for(int i=2;i<n;i++)
      {
        
        vector<int>ans;
        ans.push_back(1);
        
        for(int j=1;j<v[i-1].size();j++)
        {
          ans.push_back(v[i-1][j]+v[i-1][j-1]);
        }
        
        ans.push_back(1);
        v.push_back(ans);
      }
      
      return v;
    }
};