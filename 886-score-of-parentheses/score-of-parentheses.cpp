class Solution {
public:
    int scoreOfParentheses(string s) {
        
      

        // // use stack approch

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