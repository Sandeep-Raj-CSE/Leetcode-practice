/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        // use fast and slow pointer

        ListNode *slow=head;
        ListNode *fast=head;

        if(head==NULL)return NULL;

        while(fast->next!=NULL && fast->next->next!=NULL )
        {

           fast=fast->next->next;
            slow=slow->next;
            
            if(fast == slow){
                slow = head;
                
                while(slow != fast){
                    fast=fast->next;
                    slow=slow->next;
                }
                return slow;
            }



        }
        return false;
        
        // using the vector

        // vector<int>ans;

        // ListNode *curr=head;

        // // push into vector
        // for(curr=head; curr!=NULL; curr=curr->next){
        //     ans.push_back(curr->val);

        //     if(ans[curr->val]==ans[curr->next->val]){
        //         return true;
        //     }
        // }

        // return false;


    //     // using mao

    //   unordered_map<ListNode*,int>mp;
    //     ListNode *temp=head;

    //     while(temp){
    //         if(mp[temp]==0){
    //             mp[temp]++;
    //         }else{
    //             return true;
    //         }

    //         temp=temp->next;
    //     }

    //     return false;

    }
};