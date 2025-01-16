class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int res = 0;
        int n1 = nums1.size(), n2 = nums2.size();
        for (int i = 0; i < n1 && n2 % 2 != 0; i++) {
            res ^= nums1[i];
        }
        for (int i = 0; i < n2 && n1 % 2 != 0; i++) {
            res ^= nums2[i];
        }
        return res;
    }
};