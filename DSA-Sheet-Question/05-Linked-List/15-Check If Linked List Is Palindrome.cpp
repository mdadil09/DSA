#include<bits/stdc++.h>
using namespace std;


    class Node
    {
    public:
        int data;
        Node *next;
        Node()
        {
            this->data = 0;
            next = NULL;
        }
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
        Node(int data, Node* next)
        {
            this->data = data;
            this->next = next;
        }
    };

Node* reverseLinkedList(Node *head)
{
    // Write your code here
    if(head == NULL) return NULL;
    Node* prev = NULL, *curr = head, *n = head->next;
    while(curr != NULL){
        curr->next = prev;
        prev = curr;
        curr = n;
        if(n != NULL) n = n->next;
    }
    return prev;
}
bool isPalindrome(Node *head)
{
    // write your code here
    Node *slow = head, *fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    slow->next = reverseLinkedList(slow->next);
    Node *start = head, *mid = slow->next;
    while(mid != NULL){
        if(mid->data != start->data) return false;
        start = start->next;
        mid = mid->next;
    }
    slow->next = reverseLinkedList(slow->next);
    return true;
}