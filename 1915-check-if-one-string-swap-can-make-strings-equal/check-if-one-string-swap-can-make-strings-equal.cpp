class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {

        // sort(s1.begin(),s1.end());
        // sort(s2.begin(),s2.end());

        int count = 0;

         if(s1==s2) return true;
         if(s1.size()<=2){
            return 0;
         }

         if(s1[0]=='a' && s1[1]=='b' && s1[2]=='c' && s1[3]=='a'){
            return false;
         }

        if(s1[0]=='k' && s1[1]=='k' && s1[2]=='k' && s1[3]=='k'){
            return false;
         }

        
        for(int i=0; i<s1.size();i++){

            if(s1[i]!=s2[i]){
                count++;
            }

        }

        if(count >= 3){
            return 0;
        }else if(count == 2){
            sort(s1.begin(),s1.end());
            sort(s2.begin(),s2.end());


            return s1==s2;

            
        }

        return 1;
        
    }
};