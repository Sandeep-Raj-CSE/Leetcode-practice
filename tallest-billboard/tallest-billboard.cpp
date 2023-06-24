// class Solution {
// public:
//     int tallestBillboard(vector<int>& price) {
//         int n=price.size();

//           int rod[n];
        
        
//         //rod[] ={1 2 3 4 5 6 7 8}
//         for(int i=0; i<n;i++){
//             rod[i]=i+1;
//         }
        
        
//         // same as 
        
//         int dp[n+1][n+1];
        
//         // begining of unbounded problem 
//         // first row and first col ==0
        
        
//         for(int i=0; i<n+1;i++){
//             dp[i][0]=0;
//             dp[0][i]=0;
//         }
        
        
//         // as the first row and first col is filleddd so thats 
        
//         for(int i=1; i<n+1;i++){
//             for(int j=1; j<n+1;j++){
                
                
//                 if(rod[i-1] <= j){
//                     dp[i][j]=max(price[i-1]+dp[i][j-rod[i-1]],dp[i-1][j]);
//                 }else{
//                     dp[i][j]=dp[i-1][j];
//                 }
//             }
//         }
        
        
//         return dp[n][n];
        
//     }
// };







	class Solution {
	public:
		vector<unordered_map<int,int>> dp;
		int f(int i,vector<int>& v, int d){
			if(i==v.size()){
				if(d==0){
					return 0;
				}
			  return INT_MIN;
			}

			if(dp[i].find(d)!=dp[i].end())return dp[i][d];

			int x = f(i+1,v,d);
			int y = v[i] + f(i+1,v,d+v[i]);
			int z = f(i+1,v,d-v[i]);

			return dp[i][d] = max({x,y,z});
		}
		int tallestBillboard(vector<int>& rods) {
			dp.assign(21,{});
			return f(0,rods,0);

		}
	};