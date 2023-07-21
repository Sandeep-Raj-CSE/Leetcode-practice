class Solution {
public:
    int hammingWeight(uint32_t n) {
    //   int ans=__builtin_popcount(n);

    //   return ans;


    // now basic approch
    int  ans=0;

    while(n)
    {

        if(n & 1){  // and opertion karo
            ans++;
        }

        n= n >> 1;   // bitwise ko right shift karo 
    }


    return ans;

    }
};