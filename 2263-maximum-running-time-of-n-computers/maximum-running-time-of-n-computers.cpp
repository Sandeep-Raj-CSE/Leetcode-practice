class Solution {
public:
    long long maxRunTime(int n, vector<int>& arr) {

        long long low=0;
        

        long long  high=accumulate(arr.begin(),arr.end(),0LL)/n;

        // for(int i=0; i<n;i++){
        //     sum=sum+arr[i];
        // }


        


       // long long high =  (sum/n);


        while(low < high){

            long long mid=(high+low+1)/2;

            long long time=0;


            for(int x:arr){
                time=time + min((long long)x,mid);
            }


            if(mid*n <= time)
            low=mid;

            else
            high=mid-1;
        }




        return low;



        
    }
};