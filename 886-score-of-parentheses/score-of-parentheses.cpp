class Solution {
public:
    int scoreOfParentheses(string s) {
        
        // int ans=0;

        // int op=0;
        // int cl=0;

        // for(int i=0; i<s.size();i++){

        //     if(s[i]=='('){
        //         op++;
        //     }else{
        //         cl++;
        //     }
        // }

        // ans=(op+cl)/2;
        // return ans;


        // use stack approch

        stack<int>st;
        int ind=0;

        for(auto i:s){

            if(i=='('){
                st.push(ind);
                ind=0;
            }else{
                ind=st.top()+max(2*ind,1);
                st.pop();
            }

        }

        return ind;


    }
};