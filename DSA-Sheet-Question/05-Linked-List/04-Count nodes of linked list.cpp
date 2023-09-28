#include<bits/stdc++.h>
using namespace std;

//Following is the class structure of the Node class:

class Node{
    public:
    int data;
    Node *next;
    Node(){
        this->data = 0;
        next = NULL;
    }
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node* next){
        this->data = data;
        this->next = next;
    }
};

int length(Node *head)
{
	//Write your code here
    int count = 0;
    Node *curr = head;
    while(curr != nullptr){
        count++;
        curr = curr->next;
    }
    return count;
}