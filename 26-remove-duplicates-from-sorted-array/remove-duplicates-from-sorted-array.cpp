class Solution {
public:
    int removeDuplicates(vector<int>& v) {
        // int n=v.size();
        // int ans=1;
        // for(int i=0; i<n;i++){
        //     if(v[i]!=v[ans-1]){
        //         v[ans]=v[i];
        //         ans++;
        //     }
        // }
        // return ans;

        set<int>s;
        for(int i=0; i<v.size();i++){
            s.insert(v[i]);
        }
        
        int k = s.size();
  int j = 0;
  for (int x: s) {
    v[j++] = x;
  }
  return k;
        
    }
};