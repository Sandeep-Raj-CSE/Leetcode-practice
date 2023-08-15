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
    ListNode* partition(ListNode* head, int x) {


        // vector me dalo

        vector<int>v;
        ListNode *curr=head;

        while(curr !=NULL){
            v.push_back(curr->val);
            curr=curr->next;
        }


        vector<int>val;

         for(int i=0; i<v.size();i++){

            if(v[i] < x){
                val.push_back(v[i]);
            }
            
        }

        for(int i=0; i<v.size();i++){

            if(v[i] >= x){
                val.push_back(v[i]);
            }
            
        }


        ListNode* head1=NULL;
        ListNode* tail=NULL;

        for(int i=0; i<val.size();i++){
            ListNode* temp=new ListNode(val[i]);

            if(head1==NULL){
                head1=temp;
                tail=temp;
            }else{
                tail->next = temp;
                tail = temp;
            }
        }


        return head1;



        
    }
};