class Solution {
    public boolean isAnagram(String s, String t) {
        
        if(s.length() != t.length()){
            return false;
        }

        int[] CharCount = new int[26];

        for(int i=0; i<s.length();i++){
            CharCount[s.charAt(i)-'a']++;
            CharCount[t.charAt(i)-'a']--;
        }

        for(int x:CharCount){
            if(x!=0){
                return false;
            }
        }

        return true;


    }
}