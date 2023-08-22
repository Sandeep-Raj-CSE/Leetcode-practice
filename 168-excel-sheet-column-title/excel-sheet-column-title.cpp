class Solution {
public:
    string convertToTitle(int cn) {


        // store first character

        string temp="";
        while(cn){
            cn--;
            char c='A'+cn % 26;
            //temp=temp+c;
            temp=c+temp;
            cn=cn/26;
        }


        return temp;


        
    }
};