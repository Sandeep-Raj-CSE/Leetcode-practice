class Solution {
public:
    // int count(int n, int start){

    //     //if(n==0)return 1;
    //     if(n==1) return 5;


    //     int res=0;


    //     for(int i=start; i<5;i++){

    //         res=res+count(n-1,i);

    //     }

    //     return res;
    // }
    int countVowelStrings(int n) {

        int ans=(n+1)*(n+2)*(n+3)*(n+4)/24;
        return ans;
        
    }
};