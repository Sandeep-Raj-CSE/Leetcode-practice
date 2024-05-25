class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int>ans;
        vector<string>s;
        for(int i=0;i<n;i++){
            s.push_back(to_string(i+1));           
        }
        sort(s.begin(),s.end());
        for(int i=0; i<s.size();i++){


ans.push_back(stoi(s[i]));
        }


        return ans;
        
    }
};