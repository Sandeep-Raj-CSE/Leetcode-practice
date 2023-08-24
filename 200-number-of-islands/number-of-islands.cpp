class Solution {
    void bfs(vector<vector<char>>&grid,vector<vector<int>>&vis,int row,int col){
        vis[row][col]=1;
        queue<pair<int,int>>q;
        q.push({row,col});

         int n=grid.size();
        int m=grid[0].size();

        while(!q.empty()){
            int row=q.front().first;
            int col=q.front().second;

            q.pop();

            for(int delrow=-1; delrow<=1;delrow++){
                int nrow=row+delrow;
                int ncol=col;

                // int ncol=col;
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && grid[nrow][ncol]=='1')
                {
                    q.push({nrow,ncol});
                    vis[nrow][ncol]=1;
                }
            }

             for(int delcol=-1;delcol<=1;delcol++)
            {
                int nrow=row;
                int ncol=col+delcol;
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && grid[nrow][ncol]=='1')
                {
                    q.push({nrow,ncol});
                    vis[nrow][ncol]=1;
                }
            }



        }
        

    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int ans=0;

        for(int i=0; i<n;i++){
            for(int j=0; j<m;j++){

                if(!vis[i][j] && grid[i][j]=='1'){
                    ans++;
                    bfs(grid,vis,i,j);
                }

            }
        }

        return ans;
        
        
    }
};

















