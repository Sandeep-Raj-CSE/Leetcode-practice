class Solution {
public:
    int minSteps(string s, string t) {

        // simple approch dono string me occurance of each character then calculate the a
        // absolute differece


        vector<int>cs(26,0);
        vector<int>ct(26,0);

        for(char i:s){
            cs[i-'a']++;
        }


        for(char i:t){
            ct[i-'a']++;
        }


        int ans=0;

        for(int i=0; i<26;i++){
            ans=ans+abs(cs[i]-ct[i]);
        }


        return ans/2;



        
    }
};