class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        int n = nums.size();
        vector<int> r1 , r2;
        int total = 0;
        for(int x : nums){
            total += x;
            if(x % 3 == 1) r1.push_back(x);
            if(x % 3 == 2) r2.push_back(x);
        }
        if(total % 3 == 0) return total;
        int result = 0;
        sort(r1.begin() , r1.end());
        sort(r2.begin() , r2.end());
        if(total % 3 == 1) {
            int option1 = (r1.size() >= 1) ? total - r1[0] : 0;
            int option2 = (r2.size() >= 2) ? total - (r2[0] + r2[1]) : 0;
            result = max(option1 , option2);
        }
        if(total % 3 == 2) {
            int option1 = (r2.size() >= 1) ? total - r2[0] : 0;
            int option2 = (r1.size() >= 2) ? total - (r1[0] + r1[1]) : 0;
            result = max(option1 , option2);
        }
        return result;
    }
};