class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {

        // approch discussuoion

        // 0- {1,3} == 2
        // 1 - {0,2,3} == 3

        // in 0 and 1 2 is comman is 3 so remove one then total 0,1,2,3 == 4


        // adj

        int ans=0;

        vector<unordered_set<int>>adj(n, unordered_set<int>());

       

        // create the graph [0,1 ]

         for(auto x:  roads){
            adj[x[0]].insert(x[1]);
            adj[x[1]].insert(x[0]);
        }

        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){

                // 0 -- 2
                // 0 -- 3


 
                int val = adj[i].size()+adj[j].size();   // 5

                if(adj[i].count(j))  // coman elemnet --
                    val--;
                    
                ans = max(ans, val);
            }
        }
        return ans;
        
        
    }
};