class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        //  map<int,int>m;
        // for(auto i:nums){
        //     m[i%k]++;
        // }
        // for(auto i:m){
        //     if(i.first==0 && i.second%2){
        //         return false;
        //     }
        //     if(i.first && i.second!=m[k-i.first]){
        //         return false;
        //     }
        // }
        // return true;

        int n = arr.size(); 
        vector<int> mp(k + 1, 0); 
        for(auto &x : arr) x = ((x % k) + k) % k, mp[x]++, mp[k-x]--; 
        if(mp[0] % 2) return false;
        for(int i = 1; i <= k/2; i++) if(mp[i]) return false;
        return true;

    }
};