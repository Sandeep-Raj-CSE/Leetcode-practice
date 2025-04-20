class Solution {
public:
    int maxScore(vector<int>& nums, int k) {

        int leftsum=0;
        int rightsum=0;
        int ans=0;

        for(int i=0; i<k; i++){
            leftsum = leftsum + nums[i];
            ans = leftsum;
        }

        int rightindex= nums.size()-1;

        for(int i=k-1; i>=0;i--){
            leftsum = leftsum - nums[i];

            rightsum = rightsum+ nums[rightindex];

            rightindex--;

            ans = max(ans, leftsum+rightsum);

        }


     return ans;

        
    }
};