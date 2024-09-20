class Solution {
public:

   // Memorization

    // int solve(int n , vector<int>&dp){
    //       if(n <= 1){
    //         return n;
    //     }


    //     if(dp[n] != -1){
    //         return dp[n];
    //     }


    //     return dp[n]= solve(n-1, dp) + solve(n-2, dp);
    // }
 int fib(int n) {

    //     vector<int>dp(n+1,-1);

      


    //     return dp[n] = solve(n,dp);






    /*  Tabulation*/

    vector<int>tdp(n+1 , -1);

    if(n==0 || n ==1) return n;

    tdp[0]=0;
    tdp[1]=1;


    for(int i=2; i<=n;i++){
        tdp[i] = tdp[i-1] + tdp[i-2];
    }

    return tdp[n];
        
    }
};