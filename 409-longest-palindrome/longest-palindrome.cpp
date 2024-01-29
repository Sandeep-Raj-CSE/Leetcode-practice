class Solution {
public:
    int longestPalindrome(string s) {
        // vector<int>lower(26,0);
        // vector<int>upper(26,0);

        // for(int i=0; i<s.size();i++){

        //     if(s[i] > 'a'){
        //         lower[s[i]-'a']++;
        //     }else{
        //         upper[s[i]-'A']++;
        //     }
        // }

        // int ans=0;
        // bool odd=0;

        // for(int i=0; i<26;i++){
        //     if(lower[i] % 2==0){
        //         ans=ans+lower[i];
        //     }else{
        //         ans=ans+lower[i]-1;
        //         odd=1;
        //     }


        //      if(upper[i] % 2==0){
        //         ans=ans+upper[i];
        //     }else{
        //         ans=ans+upper[i]-1;
        //         odd=1;
        //     }



        // }

        // return ans+odd;


        unordered_map<char,int>mp;
        int odd=0;

        for(char ch:s){
            mp[ch]++;


            if(mp[ch] % 2 == 1){

                odd++;

            }else{
                odd--;
            }
        }

        if(odd > 1){
            return s.length()-odd+1;
        }
        return s.length();
    }
};