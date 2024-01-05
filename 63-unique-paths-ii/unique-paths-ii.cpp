class Solution {
public:
 int f(vector<vector<int>>&obs,int i, int j,vector<vector<int>>&dp){
    if (i < 0 || j < 0 || obs[i][j] == 1) {
         return 0; 
     }

	if(i==0 && j==0) return dp[i][j]= 1;
	if(i<0 || j<0) return 0;

	if(dp[i][j]!=-1)return dp[i][j];

	int up=f(obs,i-1,j,dp);
	int left=f(obs,i,j-1,dp);
	return dp[i][j]=up+left;
}
    int uniquePathsWithObstacles(vector<vector<int>>& obs) {
        int m=obs.size();
        int n=obs[0].size();

        vector<vector<int>>dp(m,vector<int>(n,-1));

	return f(obs,m-1,n-1,dp);
    }
};