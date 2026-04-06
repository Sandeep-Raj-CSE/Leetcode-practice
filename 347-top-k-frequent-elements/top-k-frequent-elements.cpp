class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        

        // brute force approch

         vector<int> unique_nums;
    for (int n : nums) {
        if (find(unique_nums.begin(), unique_nums.end(), n)
            == unique_nums.end())
            unique_nums.push_back(n);
    }

    // O(n) count for each unique element — O(n²) total
    vector<pair<int,int>> freq_pairs;
    for (int u : unique_nums) {
        int cnt = count(nums.begin(), nums.end(), u);
        freq_pairs.push_back({cnt, u});
    }

    sort(freq_pairs.rbegin(), freq_pairs.rend());

    vector<int> res;
    for (int i = 0; i < k; i++)
        res.push_back(freq_pairs[i].second);
    return res;


     }
};