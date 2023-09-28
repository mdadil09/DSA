//Definition for singly-linked list.
class Node {
    public: 
        int data;
        Node *next;
        Node() : data(0), next(nullptr) {}
        Node(int x) : data(x), next(nullptr) {}
        Node(int x, Node *next) : data(x), next(next) {}
 };


Node *deleteLast(Node *list){
    // Write your code here
    Node *prev = nullptr, *cur = list;
    while(cur->next != nullptr){
        prev = cur;
        cur = cur->next;
    }
    prev->next = nullptr;
    delete cur;
    return list;
}