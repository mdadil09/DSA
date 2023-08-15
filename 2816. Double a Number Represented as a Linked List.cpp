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
    ListNode* reverseList(ListNode* head){
        if(head == NULL) return head;
        ListNode* prev = NULL, *curr = head, *n = head->next;
        while(curr != NULL){
            curr->next = prev;
            prev = curr;
            curr = n;
            if(n != NULL) n = n->next;
        }
        return prev;
    }
    ListNode* doubleIt(ListNode* head) {
        head = reverseList(head);
        int carry = 0;
        for(ListNode* ptr = head;ptr;ptr = ptr->next){
            int temp = ptr->val*2;
            ptr->val = (temp+carry)%10;
            carry = (temp+carry)/10;
            if(ptr->next == NULL && carry){
                ptr->next = new ListNode(carry);
                ptr = ptr->next;
            }
        }
        return reverseList(head);
    }
};