// class Solution {
// public:
// int solve(int n, vector<int>& arr, vector<int>& dp) {
//     // Base case: If there are no elements in the array, return 0
//     dp[0] = arr[0];
    
//     // Iterate through the elements of the array
//     for (int i = 1; i < n; i++) {
//         // Calculate the maximum value by either picking the current element
//         // or not picking it (i.e., taking the maximum of dp[i-2] + arr[i] and dp[i-1])
//         int pick = arr[i];
//         if (i > 1)
//             pick += dp[i - 2];
//         int nonPick = dp[i - 1];
        
//         // Store the maximum value in the dp array
//         dp[i] = max(pick, nonPick);
//     }
    
//     // The last element of the dp array will contain the maximum sum
//     return dp[n - 1];
// }
//     int rob(vector<int>& nums) {
//         int n=nums.size();
//         vector<int>dp(n,-1);

//         vector<int>v1;
//         vector<int>v2;

//         for(int i=0; i<n;i++){
//             if(i!= 0){
//                 v1.push_back(nums[i]);
//             }
//             if(i!=n-1){
//                 v2.push_back(nums[i]);
//             }
//         }

//         int ans1= solve(1,v1,dp);
//         int ans2 = solve(n-1,v2,dp);

//         return max(ans1,ans2);
        
//     }
// };


class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        // base cases
        if(n==0){return 0;}
        if(n==1){return nums[0];}
        if(n==2){return max(nums[0], nums[1]);}

        vector<int> dp1(n); 
        vector<int> dp2(n);

        dp1[0]=nums[0];
        dp1[1]=max(nums[0], nums[1]);
        for(int i=2;i<n-1;i++)
        {
            dp1[i]=max(nums[i]+dp1[i-2], dp1[i-1]);
        }

        dp2[1]=nums[1];
        dp2[2]=max(nums[1], nums[2]);
        for(int i=3;i<n;i++)
        {
            dp2[i]=max(dp2[i-1], nums[i]+dp2[i-2]);
        }

        return max(dp1[n-2], dp2[n-1]);

    }
};