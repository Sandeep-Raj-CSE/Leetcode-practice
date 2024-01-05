class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        vector<string> ans;
        string helper="";
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                if(helper.size()!=0){
                    ans.push_back(helper);
                }
                helper="";
            }
            else{
                helper+=s[i];
            }
        }
        if(helper.size()>0 and helper[0]!=' ')
            ans.push_back(helper);
        string f_ans="";
        int nn=ans.size();
        cout<< ans[nn-1];
        for(int i=nn-1;i>0;i--){
            f_ans+=ans[i];
            f_ans+=' ';
        }
        return f_ans+ans[0];
    }
};