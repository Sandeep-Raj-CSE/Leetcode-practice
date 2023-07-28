// class Solution {
// public:

//        int dp[501][501];
//     int f(int i,int j,vector<int>&p){

//         if(i>j)return 0;

//         if(dp[i][j]!=-1)return dp[i][j];




//         return dp[i][j]=max(p[i]-f(i+1,j,p),p[j]-f(i,j-1,p));
//     }
    
//     bool PredictTheWinner(vector<int>& piles) {

        

//           int n=piles.size();

//           if(piles[0]==0)return true;

//          // if(piles[0]==piles[1])return true;

//        memset(dp,-1,sizeof dp);

//        return f(0,n-1,piles)>0;
//     }
// };


class Solution {
public:
    bool PredictTheWinner(vector<int>& nums) {
        vector<int> dp=nums;
        int n=nums.size();
        for(int diff=1;diff<n;diff++){
            for(int left=0;left<n-diff;left++){
                int right=left+diff;
                dp[left]=max(nums[left]-dp[left+1],nums[right]-dp[left]);
            }
        }
        return dp[0]>=0;
    }
};