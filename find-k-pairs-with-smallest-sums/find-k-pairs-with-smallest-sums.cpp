class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>> ans;
        priority_queue<pair<int,pair<int,int>>> maxPQ;
        int size1=nums1.size(),size2=nums2.size();
        for(int i=0;i<size1;i++){
            for(int j=0;j<size2;j++){
                int sum=nums1[i]+nums2[j];
                if(maxPQ.size()<k)
                    maxPQ.push({sum,{nums1[i],nums2[j]}});
                else if(sum<maxPQ.top().first){
                    maxPQ.pop();
                    maxPQ.push({sum,{nums1[i],nums2[j]}});
                }
                else 
                    break;
            }
        }
        while(maxPQ.size()){
            int i=maxPQ.top().second.first;
            int j=maxPQ.top().second.second;
            ans.push_back({i,j});
            maxPQ.pop();
        }
        return ans;
    }
};