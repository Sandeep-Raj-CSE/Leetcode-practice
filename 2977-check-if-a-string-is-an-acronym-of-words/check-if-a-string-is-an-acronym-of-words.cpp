class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
       // if(s.length > )
        
        string temp="";

        

        for(auto it:words){
            temp=temp+it[0];
        }


        return temp==s;

        
    }
};