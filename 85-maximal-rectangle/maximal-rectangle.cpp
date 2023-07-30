class Solution {
public:

// Nerarest smaller left find karte hai 
 vector<int> find_NSL(vector<int>& heights)
    {
        stack<pair<int,int>>st;
        vector<int>v;
        for(int i=0; i<heights.size(); i++)
        {
            if(st.empty())
            {
                v.push_back(-1);
            }
            else if(st.size()>0 and st.top().first<heights[i])
            {
                v.push_back(st.top().second);
            }
            else if(st.size()>0 and st.top().first>=heights[i])
            {
                while(st.size()>0 and st.top().first>=heights[i])
                {
                    st.pop();
                } 
                if(st.empty())
                {
                    v.push_back(-1);
                }
                else
                {
                    v.push_back(st.top().second);
                }
            }
            
            st.push({heights[i], i});
        }
        
        return v;
    }

    // Nearest smaller right find karte hai
    vector<int> find_NSR(vector<int>& heights)
    {
        vector<int>v;
        stack<pair<int,int>>st;
        
        for(int i=heights.size()-1; i>=0; i--)
        {
            if(st.empty())
            {
                v.push_back(heights.size());
            }
            else if(st.size()>0 and st.top().first<heights[i])
            {
                v.push_back(st.top().second);
            }
            else if(st.size()>0 and st.top().first>=heights[i])
            {
                while(st.size()>0 and st.top().first>=heights[i])
                {
                    st.pop();
                } 
                
                if(st.empty())
                {
                    v.push_back(heights.size());
                }
                else
                {
                    v.push_back(st.top().second);
                }
            }
           
            st.push({heights[i], i});
        }
        reverse(v.begin(), v.end());
    
        return v;
    }

    // 
    
    int largestRectangleArea(vector<int>& heights) {
        
        vector<int>left = find_NSL(heights);
        vector<int>right = find_NSR(heights);
        
        vector<int> area(heights.size());
        vector<int> width(heights.size());
        
        //calc width[i] = left[i]-right[i]-1;
        for(int i=0; i<heights.size(); i++)
        {
            width[i] = right[i] - left[i] - 1;
        }
        
        //calc area[i] = width[i]*heights[i];
        for(int i=0; i<heights.size(); i++)
        {
            area[i] = width[i]*heights[i];
        }
        //find maximun from the vector
        int maxi = INT_MIN;
        for(int i=0; i<area.size(); i++)
        {
            maxi=max(maxi, area[i]);
           // cout<<area[i]<<" ";
        }
        
        return maxi;  
    }
    
    int maximalRectangle(vector<vector<char>>& matrix) {
        // char of matrix ko integer me badla
        int NewMatrix[matrix.size()][matrix[0].size()];
        for(int i=0; i<matrix.size(); i++)
        {
            for(int j=0; j<matrix[0].size(); j++)
            {
                NewMatrix[i][j] = matrix[i][j]-'0';
              
            }
           
        }

        // 2D ARRAY KO 1D me convert
        
        vector<int>v;

        // first row bheja 
        for(int j=0; j<matrix[0].size(); j++)
        {
            v.push_back(NewMatrix[0][j]);

        }

        // maximusm  area of histogram wala concept
        int maxi = largestRectangleArea(v);
        // baki row bheja
        for(int i=1; i<matrix.size(); i++)
        {
            for(int j=0; j<matrix[0].size();j++)
            {

                // agar matrix ka value zero ho jaye pura vec ka zero kar dete hai
                if(NewMatrix[i][j]==0)
                {
                    v[j] = 0;
                }

                // matrix ka value ko add kar dete hai
                else
                {
                    v[j] = v[j] + NewMatrix[i][j];
                }
            }
            // saare histogram ko compare karke area nikalte hai 
            maxi = max(maxi, largestRectangleArea(v));
        }

        
        return maxi;
    }
};