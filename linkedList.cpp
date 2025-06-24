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
    int currentIndex = 1;
    while( curr){
        if( curr->data ==value)
            return currentIndex;
        curr=curr->next;
        currentIndex++;
    }
    return -1;
}

int main() {
    Node *head=createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(30);
    printList( head);
    cout<< findNode(head, 30);

    return 0;
}
