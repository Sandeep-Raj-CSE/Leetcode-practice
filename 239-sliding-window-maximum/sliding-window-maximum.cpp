class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {



        vector<int>ans;

        list<int>ls;

        int i=0; int j=0;

        // k=3  and arr size = 2 

        while(k>nums.size()){
            ans.push_back(*max_element(nums.begin(),nums.end()));

            return ans;
        }


        while(j<nums.size()){
           // while()

            while(ls.size()>0 && ls.back() <nums[j])
            {
                ls.pop_back();
            }

           ls.push_back(nums[j]);


           if(j-i+1<k)j++;
           else if(j-i+1==k){
               ans.push_back(ls.front());

               if(ls.front()==nums[i]){
                   ls.pop_front();
               }

               i++;
               j++;
           }


        }

        return ans;

        
    }
};