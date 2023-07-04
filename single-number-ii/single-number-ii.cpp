class Solution {
public:
    int singleNumber(vector<int>& v) {
        sort(v.begin(),v.end());
        for(int i=1;i<v.size();i+=3)
        {
            if(v[i]!=v[i-1])
                return v[i-1];
        }
        return v[v.size()-1];
        
    }
};