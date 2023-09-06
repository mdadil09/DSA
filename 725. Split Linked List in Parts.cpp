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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> ans(k,nullptr);
        int totalLen = 0;
        ListNode* it = head;
        while(it!=NULL){
            totalLen++;
            it = it->next;
        }
        int len = totalLen/k;
        int d = totalLen%k;
        ListNode* node = head, *prev=NULL;
        int i=0;
        while(node != NULL && i<k){
            ans[i] = node;
            for(int j=0;j<len + (d>0?1:0);j++){
                prev = node;
                node = node->next;
            }
            prev->next = NULL;
            i++;
            d--;
        }
        return ans;
    }
};