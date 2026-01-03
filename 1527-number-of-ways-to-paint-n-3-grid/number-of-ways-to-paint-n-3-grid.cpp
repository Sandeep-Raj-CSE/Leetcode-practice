class Solution {
public:
    int numOfWays(int n) {
        
        long long yry = 6;
        long long yrg = 6;
        long long mood = 1000000007;

        for(int i=1; i<n;i++){
            long long nextyry = (3 * yry + 2 * yrg) % mood;
            long long nxtyrg = (2 * yrg + 2 * yry) % mood;

            yry = nextyry;
            yrg = nxtyrg;
        }


        return (int) (yry + yrg)  % mood;
    }
};