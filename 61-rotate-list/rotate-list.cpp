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
    ListNode* rotateRight(ListNode* head, int k)
    {
        if(!head) return head;
        vector<ListNode*> nodes;
        while(head)
        {
            ListNode* tmp = head;
            nodes.push_back(tmp);
            head = head->next;
        }
        int len = nodes.size();
        k = k % len;
        k = (len - k) % len;
        ListNode* res = nodes[k];
        if(k)
        {
            nodes[k-1]->next = nullptr;
            nodes[len - 1]->next = nodes[0];
        }
        return res;
    }
};