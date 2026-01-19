class Solution {
public:
    int maxSideLength(vector<vector<int>>& mat, int threshold) {
        int m = mat.size(), n = mat[0].size();
        vector<vector<int>> pref = mat;
        for (int i = 0; i < m; i++)
            for (int j = 1; j < n; j++)
                pref[i][j] += pref[i][j - 1];
        for (int j = 0; j < n; j++)
            for (int i = 1; i < m; i++)
                pref[i][j] += pref[i - 1][j];

        int res = 0, low = 1, high = min(m, n);
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (isValid(pref, mid, threshold)) {
                res = mid;
                low = mid + 1;
            } else
                high = mid - 1;
        }
        return res;
    }
    
    bool isValid(vector<vector<int>>& pref, int mid, int threshold) {
        int m = pref.size(), n = pref[0].size();
        for (int i = mid - 1; i < m; i++)
            for (int j = mid - 1; j < n; j++) {
                int x0 = i - mid + 1;
                int y0 = j - mid + 1;
                int sum = pref[i][j]
                        - (x0 > 0 ? pref[x0 - 1][j] : 0)
                        - (y0 > 0 ? pref[i][y0 - 1] : 0)
                        + (x0 > 0 && y0 > 0 ? pref[x0 - 1][y0 - 1] : 0);
                if (sum <= threshold)
                    return true;
            }
        return false;
    }
};