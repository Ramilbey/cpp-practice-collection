#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* createNode(int value){
    Node *newNode = new Node;
    newNode->data=value;
    newNode -> next= NULL;
    return newNode;
}
void printList(Node *head){
    Node *curr=head;
    while(curr){
        cout<<curr->data<<"-";
        curr=curr->next;
    }
}
int findNode(Node *&head, int value){
    Node *curr=head;
    int i;
    while( curr){
        if( curr->data = value)
            return i;
        curr=curr->next;
        i++;
    }
    return -1;
}

int main() {
    Node *head=createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(30);
    printList( head);

    return 0;
}
