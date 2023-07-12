class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& adj) {
        int V=adj.size();
         
        vector<int>adjrev[V];
        
        //int indegree[V]={0};

        map<int,int>indegree;
        
        for(int i=0; i<V;i++){
            for(auto it:adj[i]){
                adjrev[it].push_back(i);
                indegree[i] ++;
            }
        }
        
        queue<int>q;
        
        vector<int>safe;
        
        for(int i=0; i<V;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        
        
        while(!q.empty()){
            int node=q.front();
            
            q.pop();
            
            safe.push_back(node);
            
            for(auto it:adjrev[node]){
                indegree[it]--;
                
                if(indegree[it]==0){
                    q.push(it);
                }
            }
        }
        
        sort(safe.begin(),safe.end());
        
        return safe;
    }
};