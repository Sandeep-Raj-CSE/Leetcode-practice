class Solution {
public:

    bool numisgood(int num){
        bool changed = false;

        while(num > 0){
            int digit = num % 10;

            // invalid digits
            if(digit == 3 || digit == 4 || digit == 7){
                return false;
            }

            // digits that change
            if(digit == 2 || digit == 5 || digit == 6 || digit == 9){
                changed = true;
            }

            num /= 10;
        }

        return changed;
    }

    int rotatedDigits(int n) {
        int ans = 0;

        for(int i = 1; i <= n; i++){
            if(numisgood(i)){
                ans++;
            }
        }

        return ans;
    }
};