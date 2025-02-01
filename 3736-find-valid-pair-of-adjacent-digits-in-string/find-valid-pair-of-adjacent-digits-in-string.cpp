class Solution {
public:
    string findValidPair(string s) {
        

    // count the value of each integer in present    
     unordered_map<int,int> mp;

     for(char ch:s){
        int num = ch - '0';
        mp[num]++;
     }

    // then check adjecent element 
     for(int i=0; i<s.size();i++){

        int x = s[i]-'0';

        int y = s[i+1]-'0';


        if(x!=y && mp[x] == x && mp[y] == y){
            return string(1,s[i]) + string(1,s[i+1]);
        }
     }

     return  "";

    }
};