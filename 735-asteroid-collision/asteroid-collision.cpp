class Solution {
public:

    bool isInsert(int ele, stack<int> &st){
        if(st.empty() || st.top()<0){
            return true;
        }else if(ele>0 && st.top()>0){
            return true;
        }
        return false;
    }

    vector<int> asteroidCollision(vector<int>& nums) {

        stack<int> st;
        vector<int> ans;
        int n = nums.size();

        for(int i=0;i<n;i+=1){
            if(isInsert(nums[i], st)){
                st.push(nums[i]);
            }else{
                bool ok = false;
                while(!st.empty()){
                    if(isInsert(nums[i],st)){
                        st.push(nums[i]);
                        ok=true;
                        break;
                    }

                    // Deleteing condition
                    if(abs(st.top())<abs(nums[i])){
                        st.pop();
                    }else if(abs(st.top()) == abs(nums[i])){
                        st.pop();
                        ok=true;
                        break;
                    }else{
                        break;
                    }
                }

                if(!ok && st.empty()){
                    st.push(nums[i]);
                }
            }
        }

        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};