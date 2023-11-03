class Solution {
public:
    bool checkRecord(string s) {

        int ab=0;

        for(int i=0; i<s.length();i++){
            if(s[i]=='A'){
                ab++;
            }
        }

        if(ab >= 2){
            return false;
        }

        if(s.length() >= 3){

             for(int i=0; i<s.length()-2;i++){
            if(s[i]=='L' && s[i+1]=='L' && s[i+2]=='L'){
                return false;
            }
        }

        }

       


        return true;


        
    }
};