#include<bits/stdc++.h>
using namespace std;


//Following is the class structure of the Node class:

template <typename T>
class Node{
    public:
    T data;
    Node<T> *next;
    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    Node(T data)
    {
        this->data = data;
        this->next = NULL;
    }
    Node(T data, T* next)
    {
        this->data = data;
        this->next = next;
    }
};

int searchInLinkedList(Node<int> *head, int k) {
    // Write your code here.
    Node<int>* cur = head;
    while(cur != NULL){
        if(cur->data == k){
            return 1;
        }
        cur = cur->next;
    }
    return 0;
}