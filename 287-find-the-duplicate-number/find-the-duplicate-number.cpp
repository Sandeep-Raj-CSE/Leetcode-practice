class Solution {
public:
    int findDuplicate(vector<int>& v) {
        int n=v.size();
        sort(v.begin(),v.end());
        
        
        for (int i = 1; i < n; i++) {
            if (v[i] == v[i - 1]) {
                return v[i];
            }
        }

        return n;
    }
        
    
};