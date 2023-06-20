class Solution {
public:
    int largestAltitude(vector<int>& gain) {

        int maxalt=0;
        int curralt=0;

        for(int i=0; i<gain.size();i++){
            curralt +=gain[i];

            maxalt=max(maxalt,curralt);
        }

        return maxalt;
        
    }
};