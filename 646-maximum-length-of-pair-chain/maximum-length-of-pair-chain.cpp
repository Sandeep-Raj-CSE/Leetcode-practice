class Solution {
public:

    static bool compare(vector<int>&v1,vector<int>&v2){
        return v1[1] < v2[1];
    }
    int findLongestChain(vector<vector<int>>& v) {
        
        sort(v.begin(),v.end(),compare);
        int prev=0;
        int res=1;

        for(int i=1; i<v.size();i++){

            if(v[prev][1] < v[i][0]){
                prev=i;
                res++;
            }


        }

        return res;

    }
};