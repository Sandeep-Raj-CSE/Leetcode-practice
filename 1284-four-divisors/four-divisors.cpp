class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        
        // Basic logic
        /*
        - travese in array
        - take 2nd loop to 1 to nums[i] and
        check nums[i] % j == 0
        - count ko bada do
        - sum = sum + j;

        - count > 4 break karo
        agar count == 4 to sum ko ans me add karo 
        return kar do aNS KO

        */


        int n = nums.size();

        int ans = 0;

        for(int i=0; i<n;i++){
            int dvc = 0;
            int dvs = 0;

            for(int j=1; j<=nums[i];j++){
                if(nums[i] % j == 0){
                    dvc++;
                    dvs = dvs + j;
                }

                if(dvc > 4){
                    break;
                }
            }

            if(dvc == 4){
                ans = ans + dvs;
            }
        }

        return ans;
    }
};