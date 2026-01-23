// 🚀 **C++ Solution**
#include <vector>
#include <set>
#include <algorithm>
#include <climits>
using namespace std;

class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        int n = nums.size();
        if (n <= 1) return 0;
        
        // Convert to long long to prevent overflow
        vector<long long> values(n);
        for (int i = 0; i < n; i++) {
            values[i] = nums[i];
        }
        
        // Set for current indices (sorted)
        set<int> indices;
        for (int i = 0; i < n; i++) {
            indices.insert(i);
        }
        
        // Set for pairs (sum, left_index)
        set<pair<long long, int>> pairs;
        
        // Count inversions
        int inversions = 0;
        for (int i = 0; i < n - 1; i++) {
            long long sum = values[i] + values[i + 1];
            pairs.insert({sum, i});
            if (values[i] > values[i + 1]) {
                inversions++;
            }
        }
        
        int operations = 0;
        
        while (inversions > 0) {
            // Get minimum sum pair
            auto it = pairs.begin();
            long long sum = it->first;
            int i = it->second;
            pairs.erase(it);
            
            // Find right element (next index after i)
            auto idxIt = indices.find(i);
            auto nextIt = next(idxIt);
            int j = *nextIt;
            
            // If current pair is inversion
            if (values[i] > values[j]) {
                inversions--;
            }
            
            // Get left and right neighbors
            auto leftIt = (idxIt != indices.begin()) ? prev(idxIt) : indices.end();
            auto rightIt = next(nextIt);
            
            // Update left neighbor
            if (leftIt != indices.end()) {
                int h = *leftIt;
                long long oldSum = values[h] + values[i];
                
                // Remove old pair
                pairs.erase({oldSum, h});
                if (values[h] > values[i]) {
                    inversions--;
                }
                
                // Add new pair
                long long newSum = values[h] + sum;
                pairs.insert({newSum, h});
                if (values[h] > sum) {
                    inversions++;
                }
            }
            
            // Update right neighbor
            if (rightIt != indices.end()) {
                int k = *rightIt;
                long long oldSum = values[j] + values[k];
                
                // Remove old pair
                pairs.erase({oldSum, j});
                if (values[j] > values[k]) {
                    inversions--;
                }
                
                // Add new pair
                long long newSum = sum + values[k];
                pairs.insert({newSum, i});
                if (sum > values[k]) {
                    inversions++;
                }
            }
            
            // Update values and indices
            values[i] = sum;
            indices.erase(nextIt);
            operations++;
        }
        
        return operations;
    }
};