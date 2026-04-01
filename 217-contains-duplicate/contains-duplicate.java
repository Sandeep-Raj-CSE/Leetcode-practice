class Solution {
    public boolean containsDuplicate(int[] num) {
        
        HashSet<Integer> seenNumber = new HashSet<>();

        for(int x:num){
            if(seenNumber.contains(x)){
                return true;
            }

            seenNumber.add(x);
        }

        return false;
    }
}