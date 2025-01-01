class Solution {
public:
    int maxScore(string s) {
        int onecount = 0;
        int zerocount = 0;

        int ans = INT_MIN;

        for(int i= 0 ; i < s.size()-1;i++){
            if(s[i] == '1'){
                onecount++;
            }else{
                zerocount++;
            }


            ans = max(ans, zerocount - onecount);
        }


        if(s[s.size()-1] == '1'){
            onecount++;
        }

        return ans + onecount;
    }
};