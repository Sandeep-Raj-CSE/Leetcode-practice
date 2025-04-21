class Solution {
public:
    int lengthOfLongestSubstring(string s) { 
        int n = s.length();

        unordered_map<char,int>hash;

        int left =0;
        int right =0;

        int ans = 0;
        while( right < n){
            int len=0;

            if(hash.find(s[right]) != hash.end()){

                if(hash[s[right]] >= left){
                    left = hash[s[right]]+1;
                }

            }

            
            

            len = right - left +1;
            ans = max(ans, len);
            hash[s[right]]=right;
            right++;

            



        }
        return ans;
    }
};