class Solution {
public:

    int solve(vector<int>&dp, int n ){

        if(n==0) return 0;
        if(n==1) return 1;

        dp[0]=0;
        dp[1]=1;
        dp[2]=2;

        for(int i=3; i<=n;i++){
            dp[i] = dp[i-1] + dp[i-2];
        }

        return dp[n];
    }
    int climbStairs(int n) {

       


        // convert into dp

        vector<int>dp(n+1 , -1);

        return solve(dp,n);
        
    }
};