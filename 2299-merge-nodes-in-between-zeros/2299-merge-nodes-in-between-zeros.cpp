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
    ListNode* mergeNodes(ListNode* head) {
        struct ListNode * t = head->next;
        struct ListNode *z = head;
        int sum = 0;
        while(t) {
            sum += t->val;
            if(t->val == 0) {
                z->val = sum;
                if(t->next == NULL) {
                    z->next = NULL;
                    return head;
                }
                z->next = t;
                z = z->next;
                sum = 0;
            }
            t = t->next;
        }
        z->next = NULL;

        return head;
    }
};