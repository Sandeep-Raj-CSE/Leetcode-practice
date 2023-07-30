class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {

       vector<int> ans;
       vector<int>nsr;
       vector<int>nsl;
       stack<pair<int,int>>st1;
       stack<pair<int,int>>st2;
      
      
       int n = heights.size();

      
    // next smallest to right
    for(int i=n-1;i>=0;i--){

        if(st1.empty()) nsr.push_back(n);

        else if (st1.top().first<heights[i]) nsr.push_back(i+1);

        else if(st1.top().first>=heights[i]){

            while(st1.size()>0 and st1.top().first>=heights[i])st1.pop();

            if(st1.empty()) nsr.push_back(n);

            else nsr.push_back(st1.top().second);

            }
            
            st1.push({heights[i],i});
       }

       reverse(nsr.begin(),nsr.end());

       // for nsl indexing

    for(int i=0;i<n;i++){

        if(st2.empty()) nsl.push_back(-1);

        else if(st2.top().first<heights[i]) nsl.push_back(i-1);

        else if(st2.top().first>=heights[i]){

            while(st2.size()>0 and st2.top().first>=heights[i]) st2.pop();

            if(st2.empty()) nsl.push_back(-1);
            else nsl.push_back(st2.top().second);
        }

        st2.push({heights[i],i});
           
       }

        // to find width of the rectangle

        for(int i=0;i<n;i++) 
        ans.push_back(nsr[i]-nsl[i]-1);

        // to calculate area 

        for(int i=0;i<n;i++) ans[i] = ans[i]*heights[i];
        

        return (*max_element(ans.begin(),ans.end()));

    }
};