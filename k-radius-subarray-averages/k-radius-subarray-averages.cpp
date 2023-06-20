class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {

        // aditya verma approch Template

        int i=0;
        int j=0;

        int n= nums.size();


        int window = k * 2 +1;

        vector<int>res(n,-1);

        long long sum=0;

        while(j < n){
            sum= sum+ nums[j];



            if(j-i+1 < window){
                j++;
            }else if(j-i+1 == window){
                int av=(sum/window);

                res[k]=av;
                k++;

                sum = sum - nums[i];

                i++;
                j++;
            }
        }


        return res;



        
        
    }
};