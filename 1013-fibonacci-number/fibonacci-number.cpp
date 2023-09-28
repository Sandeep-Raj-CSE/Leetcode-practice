class Solution {
public:
    int fib(int n) {


        if(n==0){
            return 0;
        }

        if(n==2){
            return 1;
        }

        if(n==3){
            return 2;
        }

        if(n==1){
            return 1;
        }


        int l=fib(n-1);
        int sl=fib(n-2);


        return l+sl;
        
    }
};