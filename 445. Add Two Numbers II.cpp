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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> s1,s2;
        while(l1){
            s1.push(l1->val);
            l1 = l1->next;
        }
        while(l2){
            s2.push(l2->val);
            l2 = l2->next;
        }
        ListNode* l3 = nullptr;
        int carry = 0;
        while(!s1.empty() || !s2.empty() || carry){
            int n1 = 0, n2 = 0;
            if(!s1.empty()){
                n1 = s1.top();
                s1.pop();
            }
            if(!s2.empty()){
                n2 = s2.top();
                s2.pop();
            }
            ListNode* t = new ListNode((n1+n2+carry)%10,l3);
            l3 = t;
            carry = (n1+n2+carry)/10;
        }
        return l3;
    }
};