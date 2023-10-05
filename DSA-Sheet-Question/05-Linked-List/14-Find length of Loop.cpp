#include<bits/stdc++.h>
using namespace std;


//Definition of linked list:

class Node {
public:
     int data;
     Node *next;
     Node(int data) {
         this->data = data;
         this->next = NULL;
     }
};


int lengthOfLoop(Node *head) {
    // Write your code here
    Node *slow = head, *fast = head;
    int count = 0;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            slow = slow->next;
            count++;
            while(slow != fast){
                slow = slow->next;
                count++;
            }
            return count;
        }
    }
    return 0;
}
