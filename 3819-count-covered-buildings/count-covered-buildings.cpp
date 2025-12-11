class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>>& buildings) {
        unordered_map<int, pair<int, int>> mpXtoMinMaxY; // x -> (minY, maxY)
        unordered_map<int, pair<int, int>> mpYtoMinMaxX; // y -> (minX, maxX)

        for(vector<int> &building : buildings) {
            int x = building[0];
            int y = building[1];

            if(!mpYtoMinMaxX.count(y)) {
                mpYtoMinMaxX[y] = {INT_MAX, INT_MIN};
            }

            if(!mpXtoMinMaxY.count(x)) {
                mpXtoMinMaxY[x] = {INT_MAX, INT_MIN};
            }

            mpYtoMinMaxX[y].first = min(mpYtoMinMaxX[y].first, x);
            mpYtoMinMaxX[y].second = max(mpYtoMinMaxX[y].second, x);

            mpXtoMinMaxY[x].first = min(mpXtoMinMaxY[x].first, y);
            mpXtoMinMaxY[x].second = max(mpXtoMinMaxY[x].second, y);
        }

        int ans = 0;

        for(vector<int> &building : buildings) {
            int x = building[0];
            int y = building[1];

            auto &xr = mpYtoMinMaxX[y]; // minX, maxX for this y
            auto &yr = mpXtoMinMaxY[x]; // minY, maxY for this x

            if(xr.first < x && x < xr.second && yr.first < y && y < yr.second) {
                ans++;
            }
        }

        return ans;
    }
};