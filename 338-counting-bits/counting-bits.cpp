class Solution {
public:
    vector<int> countBits(long long n) {

        vector<int >ans;

        // long long res=0;
        // for(int i=1; i<=n;i++){

        //     res=res+__builtin_popcount(i);

        // }

        // ans.push_back(res);
        

        // return ans;


        for(int i=0;i<=n;i++){

            int sum=0;

            int num=i;
            

            while(num!=0){
                sum=sum+num%2;

                num=num/2;

            }

            ans.push_back(sum);

            
        }

        return ans;
    }
};