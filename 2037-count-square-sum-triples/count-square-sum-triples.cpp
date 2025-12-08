class Solution {
public:
    int countTriples(int n) {
        int ct = 0;
        for (int i = 1; i < n + 1; i++) {
            for (int j = 1; j < n + 1; j++) {

                int x = pow(i, 2) + pow(j, 2); // compute i² + j²
                x = sqrt(x);                  // take square root → possible c value

                // check if x is an integer and satisfies Pythagoras theorem
                if (pow(x, 2) == (pow(i, 2) + pow(j, 2))) {
                    if (x <= n) {
                        ct++;
                    }
                }
            }
        }
        return ct;
    }
};
