class Solution {
public:
    bool isPalindrome(int n)
    {

        int temp = n;

         long long rev= 0;

        while(n > 0){
            int rem = n % 10;

            n = n / 10;

            rev = rev * 10 + rem;
        }


        if(rev == temp){
            return true;
        }


        return false;

        
    }
};