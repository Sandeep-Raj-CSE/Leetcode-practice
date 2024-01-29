class Solution {
public:
    bool isPalindrome(string s) {
        //  transform(s.begin(), s.end(), s.begin(), ::tolower);
        // int str=0;
        // int end=s.size()-1;

        // while(str < end){



        //     if(s[str]!=s[end]){
        //         return false;
        //     }
        //     str++;
        //     end--;
        // }

        // return true;


         int left = 0;
        int right = s.length() - 1;
        while(left < right) {
            if(!isalnum(s[left])) left++; // Ignore if not alphanumeric
            else if(!isalnum(s[right])) right--; // Ignore if not alphanumeric
            else if(tolower(s[left]) != tolower(s[right])) return false;
            else {
                left++;
                right--;
            }
        }
        return true;
    }
};