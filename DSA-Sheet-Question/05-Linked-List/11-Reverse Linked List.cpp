#include<bits/stdc++.h>
using namespace std;


//Following is the class structure of the Node class:

class Node{
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