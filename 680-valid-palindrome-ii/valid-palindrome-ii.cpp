class Solution {
public:
    bool check(string s, int start , int end){

        while(start<=end){
            if(s[start] == s[end]){
                start++;
                end--;
            }else{
                return false;
            }
        }

        return true;
    }
    bool validPalindrome(string s) {
        
        int i = 0;
        int j = s.length()-1;

        while(i < j){

            if(s[i] == s[j]){
                i++;
                j--;
            }else{

                bool ans1 = check(s,i+1,j);
                bool ans2 = check(s,i,j-1);

                return ans1 || ans2;
            }


        }

        return true;
    }
};