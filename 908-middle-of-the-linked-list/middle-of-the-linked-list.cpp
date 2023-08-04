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
    ListNode* middleNode(ListNode* head) {

        // By normal method
        // count the length

        int len=0;
        ListNode* curr=head;
        while(curr!=NULL){
            curr=curr->next;
            len++;
        }


        int ans=len/2;

        ListNode *temp=head;

        int cnt=0;

        while(cnt < ans){
            temp=temp->next;
            cnt++;
        }


        return temp;




        
        
    }
};