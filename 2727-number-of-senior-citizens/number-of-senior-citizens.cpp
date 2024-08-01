class Solution {
public:
    int countSeniors(vector<string>& details) {
        int Count = 0;
        for (const string& info : details) {
            char tens = info[11];
            char ones = info[12];
            if (tens > '6' || (tens == '6' && ones > '0')) {
                Count++;
            }
        }
        return Count;
    }
};