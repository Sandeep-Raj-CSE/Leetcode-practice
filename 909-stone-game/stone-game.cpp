class Solution {
public:

    int dp[501][501];
    int f(int i,int j,vector<int>&p){

        if(i>j)return 0;

        if(dp[i][j]!=-1)return dp[i][j];




        return dp[i][j]=max(p[i]-f(i+1,j,p),p[j]-f(i,j-1,p));
    }
    bool stoneGame(vector<int>& piles) {
       int n=piles.size();

       memset(dp,-1,sizeof dp);

       return f(0,n-1,piles)>0;       
    }
};