class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        
        // USing stl

        sort(nums.begin(),nums.end());  // T.C = O(n*logn)
        return nums;
    }
};