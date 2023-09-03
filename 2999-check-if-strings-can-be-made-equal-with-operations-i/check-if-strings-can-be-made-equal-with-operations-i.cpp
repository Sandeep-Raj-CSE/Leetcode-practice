class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        int n=s1.length();
        int m=s2.length();
        
        if(n < 4 || m<  4){
            return false;
        }
        
        for(int i=0; i<n;i++){
            // if(s1[i]!=s2[(i+2)%n]) && ((s2[i]!=s1[i]))


            if(s1[i]!=s2[(i+2)%n] && (s2[i]!=s1[i]))
            return false;
        }


        return true;
        
    }
};