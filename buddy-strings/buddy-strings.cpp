class Solution {
public:

    bool buddyStrings(string S1, string S2) {
        
        if(S1.size()!=S2.size())         
            return false;
        
        if(S1.size()==0 || S1.size()==1) 
            return false;
        

        if(S1==S2)
        {
            set<char> S(S1.begin(),S1.end());
            if(S1.size()!=S.size())
                return true;
            return false;
        }
        
     
        int first=-1;
        int second=-1;
        int diff=0;           
        for(int i=0;i<S1.size();i++)
        {
            if(S1[i]!=S2[i])
            {
                diff++;
                if(first==-1)
                    first=i;
                else if(second==-1)
                    second=i;
                
                if(diff>2)
                    return false;
            }
        }
        
        if(diff==2)             
        {
            if(S1[first]==S2[second] && S1[second]==S2[first])  // 
                 return true;
        }
        return false;
    }
}; 