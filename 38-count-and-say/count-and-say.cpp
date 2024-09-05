class Solution {
public:
    string countAndSay(int n) {


        if(n == 1) return "1";
        if(n==2) return "11";


        string s = countAndSay(n-1);


        string ans = "";

        for(int i=0; i<s.length();i++){
            char ch = s[i];

            int cnt = 1;

            while( i<s.length()-1 && s[i] == s[i+1]){
                cnt++;
                i++;
            }

            ans  += to_string(cnt) + string(1,ch);
        }


        return ans;




        
    }
};