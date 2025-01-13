class Solution {
public:
    int minimumLength(string s) {
        unordered_map<char,int>mp;

        int ans=0;

        for(char c:s){
            mp[c]++;
        
        }

        for(auto i:mp){

            if(i.second > 2){
                if(i.second%2==0){
                    ans = ans + (i.second-2);
                }else{
                    ans = ans + (i.second-1);
                }
            }
        }

        return s.length()-ans;
    }
};