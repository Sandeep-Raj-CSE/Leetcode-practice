class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        // just simple logic 
        // using 2 pointer approch
        int ans=-1;
        int subs=0;

        int n=s.size();

        for(int i=0; i<n;i++){
            for(int j=n-1;j>=i;j--){

                if(s[i]==s[j]){

                    subs=j-i-1;
                    // 2nd test case
                    // n= 3-0-1==2

                    if(subs>ans){
                        ans=subs;
                    }

                    break;

                }

            }
        }

        return ans;
    }
};