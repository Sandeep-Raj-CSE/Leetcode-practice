class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_map<int, int> elementCount;
        vector<int> prefixCommon(A.size(), 0);
        int commonCount = 0;

        for (int i = 0; i < A.size(); i++) {
            // Update count for A[i]
            if (elementCount[A[i]] > 0) {
                commonCount++;
            }
            elementCount[A[i]]++;

            // Update count for B[i]
            if (elementCount[B[i]] > 0) {
                commonCount++;
            }
            elementCount[B[i]]++;

            // Store the current count in the result array
            prefixCommon[i] = commonCount;
        }

        return prefixCommon;
    }
};