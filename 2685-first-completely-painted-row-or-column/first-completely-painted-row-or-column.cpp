class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        // unordered_map<int,pair<int,int>> mpp;
        vector<pair<int,int>> mpp(arr.size()+1);
        int m=mat.size(),n=mat[0].size();

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                mpp[mat[i][j]]={i,j};
            }
        }
        vector<int> rows(m,0),cols(n,0);
        for(int i=0;i<arr.size();i++){
            int x=mpp[arr[i]].first;
            int y=mpp[arr[i]].second;
            rows[x]++;
            cols[y]++;
            if(rows[x]==n||cols[y]==m)return i;
        }
        return 0;
    }
};