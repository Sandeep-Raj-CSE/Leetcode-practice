class Solution {
public:
    bool halvesAreAlike(string s) {
        // simple se logic hai yrr 
        

        int left=0;
        int right=0;

        for(int i=0; i<s.size()/2;i++){
            if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='o' || s[i]=='O'
            || s[i]=='i' || s[i]=='I' || s[i]=='u' || s[i]=='U' ){
                left++;
            }
        }

        for(int i=s.size()/2; i<s.length();i++){
            if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='o' || s[i]=='O'
            || s[i]=='i' || s[i]=='I' || s[i]=='u' || s[i]=='U' ){
                right++;
            }
        }


        if(left==right){
            return true;
        }

        return false;
    }
};