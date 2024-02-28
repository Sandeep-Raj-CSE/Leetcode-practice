class Solution {
public:
    //function to check if a number is self-dividing number or not
    bool isSDN(int n){
        int digit;
        int num = n; // copying value of n
        
        while(num != 0){
            digit = num % 10;
            // keep checking if digit is zero or number is divisible by digit
            if(digit == 0 || n % digit != 0){
                return false;
            }
            
            num /= 10;
        }
        
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        
        for(int i = left; i <= right; i++){
            
            if(isSDN(i)){
                ans.push_back(i);
            }
        }
        
        return ans; 
    }
};