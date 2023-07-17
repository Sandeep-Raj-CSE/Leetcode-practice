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
    void totalcount(ListNode* node, vector<int>& v) {
        if(node==NULL)return;
        v.push_back(node->val);
        totalcount(node->next,v);
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int>fi;
        vector<int>sec;

        vector<int>ans;

        totalcount(l1,fi);
        totalcount(l2,sec);

        int n = fi.size();
        int m = sec.size();
        int carry = 0;

        ListNode* head = NULL;

        while (n > 0 || m > 0 || carry > 0) {
            int sum = carry;
            if (n > 0) {
                sum += fi[--n];
            }
            if (m > 0) {
                sum += sec[--m];
            }
            carry = sum / 10;
            ListNode* newNode = new ListNode(sum % 10);
            newNode->next = head;
            head = newNode;
        }

        return head;




    }
};