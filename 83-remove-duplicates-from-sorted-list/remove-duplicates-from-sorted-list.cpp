/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL or head->next==NULL)return head;
        ListNode *curr=head;
        while(curr->next !=NULL && curr!=NULL){

            if(curr->val == curr->next->val){
                curr->next=curr->next->next;
            }else{
                curr=curr->next;
            }

        }

        return head;


        // using vector


        // vector<int>ans;

        // for(ListNode *curr=head; curr!=NULL; curr=curr->next){
        //     ans.push_back(curr->val);
        // }


        // sort(ans.begin(),ans.end());

        // set<int>s;
        // for(auto i:ans){
        //     s.insert(ans[i]);
        // }


        //  for(ListNode *curr=head; curr!=NULL; curr=curr->next){
        //     head=s[curr];
        // }

        // return head;

    }
};