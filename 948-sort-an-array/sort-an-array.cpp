class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        
        // USing stl
      /* Time complexity - O(n*logn)
        sort(nums.begin(),nums.end());  // T.C = O(n*logn)
        return nums;
        */

        /*
          using stl but here we can use stable_sort = 
          with the time complexity will be //T.C = O(n*log(n))
        */

        stable_sort(nums.begin(), nums.end());

        return nums;


    }
};