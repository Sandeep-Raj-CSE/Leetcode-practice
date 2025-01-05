class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = s.size();
        vector<int> arr(n + 1, 0); // Difference array
        
        // Build the difference array
        for (const auto& shift : shifts) {
            int start = shift[0];
            int end = shift[1];
            int direction = shift[2];
            
            if (direction == 1) {
                arr[start] += 1;
                arr[end + 1] -= 1;
            } else {
                arr[start] -= 1;
                arr[end + 1] += 1;
            }
        }
        
        // Compute the prefix sum
        for (int i = 1; i < n; i++) {
            arr[i] += arr[i - 1];
        }
        
        // Apply the shifts
        string result = s;
        for (int i = 0; i < n; i++) {
            int shift = arr[i] % 26; // Ensure the shift is within range
            if (shift < 0) shift += 26; // Make the shift positive
            result[i] = 'a' + (s[i] - 'a' + shift) % 26;
        }
        
        return result;
    }
};