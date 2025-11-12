class Solution {
public:

    int gcd(int a, int b){
        if(b==0){
            return abs(a);
        }
        return gcd(b, a % b);
    }
    int minOperations(vector<int>& nums) {
        int n = nums.size();

        int cnt1 = count(nums.begin(), nums.end(),1);
        if(cnt1){
            return n - cnt1;
        }

        int ans = INT_MAX;
        for(int i=0; i<n;i++){
            int g = nums[i];

            for(int j = i + 1; j<n;j++){
                g = gcd(g,nums[j]);
                if(g == 1){
                    ans = min(ans,j-i + (n-1));
                    break;
                }
            }
        }
        return ans == INT_MAX ? -1 : ans;
    }
};