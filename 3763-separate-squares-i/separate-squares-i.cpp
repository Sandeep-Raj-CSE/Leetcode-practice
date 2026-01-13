class Solution {
public:
bool check(vector<vector<int>>& squares,double mid_y,double totalArea){
    double bottomArea = 0.0;
    for(auto &square:squares){
        int y = square[1];
        int top_y = square[1] + square[2];
        if(mid_y > top_y) bottomArea += ((double)square[2]*(double)square[2]);
        else if(mid_y > y) bottomArea += ((double)square[2]*(double)(mid_y-y));
        
    }
    return bottomArea >= totalArea - bottomArea ; //shift downwards.
}
    double separateSquares(vector<vector<int>>& squares) {
        double low = INT_MAX;
        double high = INT_MIN;
        double totalArea = 0.0;
        for(vector<int> &k:squares){
            totalArea += ((double)k[2]*(double)k[2]);
            low = min(low,(double)k[1]);
            high = max(high,(double)(k[1]+k[2]));
        }
        double ans = 0.0;
        while(high-low > 1e-5){
           double mid = low + (high-low)/2 ;
            ans = mid;
         if(check(squares,mid,totalArea)){
            high = mid;
         }
         else low = mid;
        }
      return ans;
    }
};