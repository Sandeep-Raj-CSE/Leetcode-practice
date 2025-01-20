class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {


       int n = nums.size();

       vector<int>ans(n,0);

       int posi =0;
       int negi=1;

       for(int i=0; i<n;i++){
          if(nums[i] > 0){
            ans[posi]=nums[i];
            posi = posi + 2;
          }else{
            ans[negi] = nums[i];
            negi = negi +2;
          }
       } 

       return ans;
    }
};