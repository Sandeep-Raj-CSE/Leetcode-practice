class Solution {
public:
void solve(vector<char>&s,int start,int end){

    if(start >= end){
        return ;
    }


    swap(s[start],s[end]);

    solve(s,start+1,end-1);

}
    void reverseString(vector<char>& s) {
       // reverse(s.begin(),s.end());

       int n=s.size();

      solve(s,0,n-1);


    }
};