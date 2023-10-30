class Solution {
public:
    bool palin(string s, int start, int end){

        while(start<=end){
            if(s[start++] != s[end--]){
                return false;
               // start++;
                //end--;
            }
        }
        return true;

    }
    void solve(int ind, string &s, vector<string>&ds, vector<vector<string>>&ans){

        if(ind == s.size()){
            ans.push_back(ds);
            return;
        }

        for(int i=ind; i<s.size();i++){
            if(palin(s,ind,i)){
                ds.push_back(s.substr(ind,i-ind+1));
                solve(i+1,s,ds,ans);
                ds.pop_back();

            }
        }
    }
    vector<vector<string>> partition(string s) {

        vector<vector<string>>ans;
        vector<string>ds;
        solve(0,s,ds,ans);
        return ans;
        
    }
};