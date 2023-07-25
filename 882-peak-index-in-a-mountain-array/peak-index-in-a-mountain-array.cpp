class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {


        // simple binary search with explanation



        int n=arr.size();

        int start=0;
        int end=n-1;

        while(start < end){
            // 0 1 0
            
            int mid= start + (end-start)/2;

            if(arr[mid] < arr[mid+1]){
                start=mid+1;
            }else{
                end=mid;
            }
        }


        return start;
        
    }
};