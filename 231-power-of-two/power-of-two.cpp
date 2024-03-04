class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0){
            return false;
        }

        if(n==1){
            return true;
        }

        int ans=0;


        while(n > 0){

            n=n&(n-1);
            ans++;

        }

        if(ans==1){
            return true;
        }else{
            return false;
        }
    }
};