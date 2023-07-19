class Solution {
public:
    static bool comp(vector<int> &a,vector<int> &b){
        return a[1] < b[1];
    }


    int eraseOverlapIntervals(vector<vector<int>>& in) 
    {

        int count=-1;
        if(in.size()==0) return 0;

        sort(in.begin(),in.end(),comp); // custom comperator is used

        vector<int> end=in[0];


        for(vector<int> i: in){

            if(end[1] > i[0]){
                count++;
            }else end=i;
        }


        return count;
        
    }
};