class Solution {
public:
    int largestMagicSquare(vector<vector<int>>& g) {
        int r = g.size(), c = g[0].size();

        // Rowvise sum matrix
        vector<vector<int>> rowM(r, vector<int>(c, 0));

        for (int i = 0; i < r; i++) {

            int sum = rowM[i][0] = g[i][0];

            for (int j = 1; j < c; j++) {
                rowM[i][j] = g[i][j] + sum;
                sum = rowM[i][j];
            }
        }

        // Colvise sum matrix
        vector<vector<int>> colM(r, vector<int>(c, 0));

        for (int i = 0; i < c; i++) {

            int sum = colM[0][i] = g[0][i];

            for (int j = 1; j < r; j++) {
                colM[j][i] = g[j][i] + sum;
                sum = colM[j][i];
            }
        }

        // Try all possible side squares

        for (int side = min(r, c); side >= 2; side--) {

            for (int i = 0; i + side - 1 < r; i++) {
                for (int j = 0; j + side - 1 < c; j++) {

                    // current row sum
                    int targetSum =
                        rowM[i][j + side - 1] - (j > 0 ? rowM[i][j - 1] : 0);

                    bool allSame = true;

                    // check all row sum
                    for (int x = i; x < i + side; x++) {
                        int sum = rowM[x][j + side - 1] -
                                  (j > 0 ? rowM[x][j - 1] : 0);
                        if (sum != targetSum) {
                            allSame = false;
                            break;
                        }
                    }

                    if (!allSame)
                        continue;

                    allSame = true;

                    // check all col sum
                    for (int x = j; x < j + side; x++) {
                        int sum = colM[i + side - 1][x] -
                                  (i > 0 ? colM[i - 1][x] : 0);
                        if (sum != targetSum) {
                            allSame = false;
                            break;
                        }
                    }

                    if (!allSame)
                        continue;

                    // check both diagonals sum
                    int diag = 0, antiDiag = 0;
                    for (int k = 0; k < side; k++) {
                        diag += g[i + k][j + k];
                        antiDiag += g[i + k][j + side - 1 - k];
                    }

                    if (diag == targetSum && antiDiag == targetSum) {
                        return side;
                    }
                }
            }
        }

        return 1;
    }
};