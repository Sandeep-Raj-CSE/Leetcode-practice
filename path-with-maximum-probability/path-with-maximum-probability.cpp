class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        
        vector<vector<pair<int,double>>> adjList(n);
// first create the graph according to question undirectd weighted graph
        for(int i=0; i<edges.size();i++){

            int u=edges[i][0];

            int v=edges[i][1];
            double prob=succProb[i];
            adjList[u].push_back({v,prob});
            adjList[v].push_back({u,prob});
        }

// create a array and of size n

      vector<double>dist(n,0);

//  
        
    dist[start]=1;


    // max -hap

    priority_queue<pair<double,int>>p;

    p.push({1,start});


    // just striver concept

    while(!p.empty()){
        pair<double,int> curr=p.top();

        p.pop();


        int node=curr.second;
        double fir=curr.first;

// if end node reach directly
        if(node == end){
            return dist[end];
        }

//  
    for(int i=0;  i<adjList[node].size();i++){
        int v=adjList[node][i].first;
        double w=adjList[node][i].second;


        if(dist[node] * w > dist[v]){
            dist[v]=dist[node]*w;

            p.push({dist[v],v});
        }
    }



    }


    return 0;


  




    }
};