// Define a class named Solution.
class Solution {
public:
    // Define a method named candy.
    int candy(vector<int>& ratings) {
        int n = ratings.size(); // Get the number of children.
        vector<int> left(n, 1), right(n, 1); // Create vectors to store left and right candy counts for each child.

        // Calculate the left candies.
        for (int i = 1; i < n; ++i) {
            if (ratings[i] > ratings[i - 1]) {
                left[i] = left[i - 1] + 1;
            }
        }

        // Calculate the right candies.
        for (int i = n - 2; i >= 0; --i) {
            if (ratings[i] > ratings[i + 1]) {
                right[i] = right[i + 1] + 1;
            }
        }

        int totalCandies = 0; // Initialize a variable to store the total number of candies given.

        // Calculate the maximum candies for each child from the left and right counts and sum them up.
        for (int i = 0; i < n; ++i) {
            totalCandies += max(left[i], right[i]);
        }

        return totalCandies; // Return the total number of candies given to all children.
    }
};