class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size(), total = 0;
        vector<int> rowCnt(n, 0), colCnt(m, 0);

        // Count servers in rows and columns
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (grid[i][j]) total++, rowCnt[i]++, colCnt[j]++;

        // Subtract isolated servers
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (grid[i][j] && rowCnt[i] == 1 && colCnt[j] == 1) total--;

        return total;
    }
};

