class Solution {
public:
   int numberOfPaths(std::vector<std::vector<int>>& grid, int k) {
        static constexpr int mod = 1e9 + 7;
        int n = grid.size();
        int m = grid.front().size();
        std::vector<std::vector<int>> dp(m, std::vector<int>(k));
        auto scanline = [&](int start, int row) {
            for (int j = start; j < m; ++j) {
                std::vector<int> arr(k);
                for (int c = 0; c < k; ++c) {
                    int value   = (grid[row][j] % k + c) % k;
                    arr[value] += (dp[j][c] + (j > 0 ? dp[j - 1][c] : 0)) % mod;
                }
                dp[j] = std::move(arr);
            }
        };
        dp[0][grid[0][0] % k] = 1;
        scanline(1, 0);
        for (int i = 1; i < n; ++i)
            scanline(0, i);
        return dp.back().front();
    }
};