
class Solution {
public:

    int minCost(vector<int>& cost, int n,vector<int>&dp){
        if(dp[n] != -1) return dp[n];
        if(n<=1) return dp[n] = 0;
        if(n==2) return dp[n] =  min(cost[0], cost[1]);
        return dp[n] =  min( minCost(cost, n-1,dp) + cost[n-1],
                    minCost(cost, n-2,dp) + cost[n-2] );
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
       vector<int>dp(1001, -1);
        return minCost(cost, n,dp);
    }
};