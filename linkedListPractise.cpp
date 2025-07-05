#include <iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* next;
};
void printList( Node* head){
  Node* curr = head;
  while(curr){
    cout<< curr->data<< "->";
    curr= curr->next;
  }
  cout<< endl;
}
int main(){
  //create 
  Node* first = new Node;
  Node* second = new Node;
  Node* third = new Node;
  //assign data
  first->data=10;
  second->data=20;
  third->data=30;
  //link with each other
  first->next=second;
  second->next=third;
  third->next=NULL;
  //call printlist funct
  printList(first); 

  return 0;
  
}
