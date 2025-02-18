class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        // bhai simple se 
        // -> sabko min me karo
        // sort karo then min difference nikalo

        vector<int> minutes;

        // Convert time to minutes
        for (string& time : timePoints) {
            int hour = stoi(time.substr(0, 2));
            int minute = stoi(time.substr(3, 2));
            minutes.push_back(hour * 60 + minute);
        }


        sort(minutes.begin(), minutes.end());

        int minDiff = INT_MAX;
        for (int i = 1; i < minutes.size(); i++) {
            minDiff = min(minDiff, minutes[i] - minutes[i - 1]);
        }

        int circularDiff = (minutes[0] + 1440) - minutes.back();
        minDiff = min(minDiff, circularDiff);

        return minDiff;

    }
};