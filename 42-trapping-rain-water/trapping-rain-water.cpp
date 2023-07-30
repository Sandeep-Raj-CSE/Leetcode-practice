class Solution {
public:
    int trap(vector<int>& height) {

        // Aditya verma approch
        int n = height.size();
        //find max in left and right
        int mxl[n], mxr[n];

        mxl[0] = height[0];
        for(int i=1; i<n; i++)
            mxl[i] = max(mxl[i-1], height[i]);
        
        //find max in the right by traversing from last
        mxr[n-1] = height[n-1];
        for(int i=n-2; i>=0; i--)
            mxr[i] = max(mxr[i+1], height[i]);
        
        //find water level
        int water[n];
        for(int i=0; i<n; i++)
            water[i] = min(mxl[i], mxr[i]) - height[i];
        
        //find sum of water stored
        int sum =0;
        for(int i=0; i<n; i++)
            sum +=water[i];
        
        return sum;
    }
};