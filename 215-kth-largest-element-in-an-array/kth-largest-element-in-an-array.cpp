class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {

        // aditya verma approch

        // k + largest = min heap 

        // priority_queue<int,vector<int>,greater<int>> minhp;

        // for(int i=0; i<nums.size();i++){


        //     minhp.push(nums[i]);


        //     if(minhp.size()>k){
        //         minhp.pop();
        //     }
        // }


        // return minhp.top();

        sort(nums.begin(),nums.end());

        return nums[nums.size()-k];

       
        
        
    }
};