class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> m ; 
        for (int i = 0 ; i< arr.size(); i++)
        {
            m[arr[i]] ++ ;
        }

        // 1- 3
        // 2 - 2
        // 3- 1


        set<int> s1;
        set<int> s2; 

        for (int i = 0 ; i < arr.size() ; i++)
        {
            s1.insert(arr[i]);
        }

        // 1 2 3

        for (auto i : m)
        {
            int val = i.second ;  // 3 2 1
            s2.insert(val) ; 
        }

        if (s1.size() == s2.size()) // 3 3 
        {
            return true ; 
        }

        return false ;
    }
};