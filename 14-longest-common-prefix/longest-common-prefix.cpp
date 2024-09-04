class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {

        string ans = "";

        sort(v.begin(),v.end());

        string f=v[0];
        string last=v[v.size()-1];

        for(int i=0; i<min(f.size(),last.size());i++){
            if(f[i] != last[i]){

                return ans;

            }

            ans = ans + f[i];
        }
        
        return ans;
    }
};