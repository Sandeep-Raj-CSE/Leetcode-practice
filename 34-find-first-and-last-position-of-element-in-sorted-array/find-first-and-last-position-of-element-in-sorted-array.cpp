class Solution {
public:
   
   int bsefi(int start,int end,int res,int target,int mid, vector<int> & arr){

       while(start <=end){
           mid= (start+end)/2;

           if(arr[mid]==target){
               res=mid;
               end=mid-1;
           }

           else if(target > arr[mid]){
               start=mid+1;
           }else{
               end=mid-1;
           }
       }

       return res;
   }

   int bseli(int start,int end,int res,int target,int mid,vector<int> & arr){
       while(start <= end)
       {

           mid= (start+end)/2;

           if(arr[mid]==target){
               res=mid;
               start=mid+1;
           }else if(target > arr[mid]){
               start=mid+1;
           }else{
               end=mid-1;
           }

       }

       return res;



   }


    vector<int> searchRange(vector<int>& nums, int target) {

        int res1=bsefi(0,nums.size()-1,-1,target,-1,nums);
        int res2=bseli(0,nums.size()-1,-1,target,-1,nums);
        

        vector<int>ans;
        ans.push_back(res1);
        ans.push_back(res2);
        return ans;
    }
};