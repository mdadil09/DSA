#include<bits/stdc++.h>
using namespace std;


//Definition of doubly linked list:
struct Node {

    int value;
    Node *prev;
    Node *next;
    Node() : value(0), prev(nullptr), next(nullptr) {}
    Node(int val) : value(val), prev(nullptr), next(nullptr) {}
    Node(int val, Node *p, Node *n) : value(val), prev(p), next(n) {}
};

Node * insertAtTail(Node *head, int k) {
    // Write your code here
    if(head == nullptr){
        Node* newNode = new Node(k);
        return newNode;
    }
    Node *temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    Node* newNode = new Node(k);
    temp->next = newNode;
    newNode->prev = temp;
    return head;
}
