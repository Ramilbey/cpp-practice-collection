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
        if( curr->data == value)
            return currentIndex;
        curr=curr->next;
        currentIndex++;
    }
    return -1;
}
void insertEnd(Node *head, int value){
    Node *curr=head;
    while(curr-> next)
        curr=curr->next;
    Node *newNode=createNode(value);
    curr-> next =newNode;
}
void insertFront(Node*& head){
    
}
void insertMidlle(Node* head, int value, int index){
    Node* curr =head;
    int currentIndex = 1;
    while(curr){
        currentIndex++;
        if( currentIndex == index){
            currentIndex +=1;
            Node* newNode = creatNode(value);
            newNode = currentIndex;
        }
    }
}

int main() {
    Node *head=createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(30);
    while(curr->next)
        
    printList( head);
    cout<< findNode(head, 30);
    
    Node 
    
    
    return 0;
}




