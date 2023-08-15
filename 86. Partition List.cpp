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
        ListNode* dright = new ListNode(1), *dleft = new ListNode(1);
        ListNode* right = dright, *left = dleft;
        while(head){
            if(head->val < x){
                dleft->next = head, dleft = dleft->next;
            } else {
                dright->next = head, dright = dright->next;
            }
            head = head->next;
        }
        dright->next = NULL;
        dleft->next = right->next;
        return left->next;
    }
};