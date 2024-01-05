class Solution {
public:
    int solve(int m, int n, vector<vector<int>> &grid, vector<vector<long long>> &dp){
        if(m==0 && n==0){
            return grid[0][0];
        }
       
        // if(m<0 || n<0){
        //     return INT_MAX;
        // }

        if(dp[m][n] != -1){
            return dp[m][n];
        }
         int up = INT_MAX;
         int left = INT_MAX;
         if(m>=1){

         up = grid[m][n] + solve(m-1, n, grid, dp);
         }
         if(n>=1){

         left = grid[m][n] + solve(m, n-1, grid, dp);
         }

        return dp[m][n] = min(up, left);
    }
    int minPathSum(vector<vector<int>>& grid) {
        long long m = grid.size();
        long long n = grid[0].size();
        vector<vector<long long >> dp(m, vector<long long>(n, -1));

        return solve(m-1, n-1, grid, dp);
    }
};