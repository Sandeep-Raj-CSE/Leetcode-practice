class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        
        // thought

        // find absolute sum 
        // neg numbr odd times to sabse chota ko neg bano

        // neg number - even times all become +ve

        long long sum = 0;
        int neg = 0;
        int smallestAbs = INT_MAX;

        int n = matrix.size();

        for(int i=0; i<n;i++){
            for(int j=0; j<n;j++){
                sum = sum + abs(matrix[i][j]);

                if(matrix[i][j]< 0){
                    neg ++;
                }

                smallestAbs = min(smallestAbs,abs(matrix[i][j]));


            }
        }

        if(neg % 2 == 0){
            return sum;
        }

        return sum - 2 * smallestAbs;

    }
};