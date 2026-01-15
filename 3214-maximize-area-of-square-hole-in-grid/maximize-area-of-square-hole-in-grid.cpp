class Solution {
public:
    int getMaxLen (vector<int> &arr) {
        int hmax = 0, vmax = 0;
        int initial = 1, prev = 1;
        for (auto x: arr) {
            if (prev + 1 == x) {
                prev = x;
            } else {
                hmax = max(hmax, prev - initial + 1);
                initial = x-1;
                prev = x;
            }
        }
        hmax = max (hmax, prev - initial + 1);
        return hmax;
    }
    int maximizeSquareHoleArea(int n, int m, vector<int>& hBars, vector<int>& vBars) {
        sort(hBars.begin(), hBars.end());
        sort(vBars.begin(), vBars.end());
        int len = min(getMaxLen(hBars), getMaxLen(vBars));
        return len * len;
    }
        
};