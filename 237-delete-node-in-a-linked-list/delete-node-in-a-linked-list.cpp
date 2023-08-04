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
    void deleteNode(ListNode* node) {

        // using linkidlist

        // ListNode* del=node->next;
        // node->val=del->val;
        // node->next=del->next;
        // using vector


        ListNode *temp=node;
        node=node->next;


        vector<int>v;

        while(node!=NULL){
            v.push_back(node->val);
            node=node->next;
        }


        for(int i=0; i<v.size();i++){
            temp->val=v[i];

            if(i!=v.size()-1){
                temp=temp->next;
            }
        }


        temp->next=NULL;



        // using stack


        
    }
};