class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
       ListNode* temp = head;
       while(temp->next){
           ListNode* newNode = new ListNode(__gcd(temp->val,temp->next->val));
           newNode->next = temp->next;
           temp->next = newNode;
           temp = newNode->next;
       } 
       return head;
    }
};