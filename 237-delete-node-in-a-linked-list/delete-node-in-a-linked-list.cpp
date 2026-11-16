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

        ListNode* cnt = node;

        while(cnt->next->next != NULL)
        {
            cnt->val = cnt->next->val;
            cnt = cnt->next;
        }

        cnt->val = cnt->next->val;
        cnt->next = NULL;


    }
};