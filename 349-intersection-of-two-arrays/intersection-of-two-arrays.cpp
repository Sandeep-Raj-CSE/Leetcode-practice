// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

//         // vector<int>v;
//         // set<int>s;

//         // for(int i=0; i<nums1.size();i++){
//         //     if(i>0 && nums1[i]==nums1[i-1])
//         //     continue;

//         //     for(int j=0;j<nums2.size();j++){
//         //         if(nums1[i]==nums2[j]){
//         //             s.insert(nums1[i]);
//         //              break;
//         //         }
//         //     }


//         // }
//         // v.assign(v.begin(),v.end());
//         // //return resultant vector
//         // return v;

        


        
//     }
// };


class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int>mp;
        for(auto x:nums1)
        mp[x]=1;
        vector<int>ans;
        for(auto x:nums2)
        {
            if(mp[x]==1)
            {
                ans.push_back(x);
                mp[x]=0;
            }
        }
        return ans;
    }
};