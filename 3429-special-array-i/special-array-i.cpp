class Solution {
public:
    bool isArraySpecial(vector<int>& nums) 
    {

//         int n = nums.size();


//       // generate pair 
       

//        for(int i=0; i<n-1;i++){
//         for(int j=i+1; j<n;j++){
//             if((nums[i] % 2 == 0 && nums[j] % 2 == 0) || (nums[i] % 2 != 0 && nums[j] % 2 != 0))
//             {
//                  return false;

//             }
           
//         }
        
//        }

// return true;


    int n = nums.size();

        // Check all pairs
        for (int i = 0; i < n - 1; i++) {
            
            if(nums[i] % 2 == nums[i+1] % 2){
                return false;
            }
        }

        return true;
        
    }
};