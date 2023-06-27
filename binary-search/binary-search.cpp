class Solution {
public:
    int search(vector<int>& arr, int k) {

        int n=arr.size();

        // int start=0;
        // int end=n-1;

        // while(start <= end){
        //     int mid=start+(end-start)/2;

        //     if(nums[mid]==target){
        //         return mid;
        //     }else if(nums[mid] < target){
        //         start=mid+1;
        //     }else{
        //         end=mid-1;
        //     }
        // }

        // return -1;

          if(binary_search(arr.begin(),arr.end(),k)){
            return lower_bound(arr.begin(),arr.end(),k)-arr.begin();
        }
        
        return -1;
        
    }
};