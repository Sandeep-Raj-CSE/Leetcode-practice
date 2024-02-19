class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

    //     vector<int>ans;
    //     for(int i=0; i<nums.size();i++){
    //         if(nums[i]==target){
    //             ans.push_back(i);
    //             break;
    //         }
    //     }
    //    // ans.push_back(-1);
    //   //  cout<<ans<<endl;

    //    for(int j=nums.size()-1;j > 0;j--){
    //        if(nums[j]==target){
    //            ans.push_back(j);
    //            break;
    //        }
         
    //    }

    //    for(int i=0; i<ans.size();i++){
    //        cout<<ans[i]<<endl;
    //    }

    //     return ans;


    // find lower bound index

    // vector<int>ans;

    // auto lb=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
    // cout<<lb<<endl;
    // auto up=(upper_bound(nums.begin(),nums.end(),target)-nums.begin())-1;
    // cout<<up<<endl;
    // ans.push_back(lb);
    // ans.push_back(up);
    // return ans;


   // vector<vector<int,int>> ans;
    vector<int>res;

    int first=-1;
    int last=-1;

    for(int i=0; i<nums.size();i++){

        if(nums[i]==target){
            if(first==-1){
                first=i;
            }
            last=i;
        }

    }

   

    res.push_back(first);
    res.push_back(last);
    return res;




        
    }
};