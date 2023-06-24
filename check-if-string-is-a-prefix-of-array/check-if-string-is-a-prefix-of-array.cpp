class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {


        // words ko concancate and s sr match karlo

        string temp="";

        for(auto it:words){
            temp+=it;



            if(temp==s)return true;

            if(temp.length()>= s.length())  return false;
        }


        return false;
        
    }
};