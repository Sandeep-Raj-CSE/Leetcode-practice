class Solution {
public:
    int minTimeToType(string s) {
         int ans = 0, prev = 'a';
        for (char c : s) {
            int diff = abs(c - prev);
            ans += min(diff, 26 - diff);
            prev = c;
            ++ans;
        }
        return ans;
        
    }
};