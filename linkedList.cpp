#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Create a new node with the given value
Node* createNode(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;
    return newNode;
}

// Print all nodes in the list
void printList(Node* head) {
    Node* curr = head;
    while (curr) {
        cout << curr->data << " -> ";
        curr = curr->next;
    }
    cout << "NULL\n";
}

// Find the index of a node with a specific value
int findNode(Node* head, int value) {
    Node* curr = head;
    int index = 1;
    while (curr) {
        if (curr->data == value)
            return index;
        curr = curr->next;
        index++;
    }
    return -1; // not found
}

// Insert a node at the end
void insertEnd(Node* head, int value) {
    Node* curr = head;
    while (curr->next)
        curr = curr->next;
    curr->next = createNode(value);
}

// Insert a node at the front (head)
void insertFront(Node*& head, int value) {
    Node* newNode = createNode(value);
    newNode->next = head;
    head = newNode;
}

// Insert a node at a specific position (1-based index)
void insertMiddle(Node* head, int value, int index) {
    Node* curr = head;
    int currentIndex = 1;

    while (curr && currentIndex < index - 1) {
        curr = curr->next;
        currentIndex++;
    }

    if (!curr) {
        cout << "Invalid index.\n";
        return;
    }

    Node* newNode = createNode(value);
    newNode->next = curr->next;
    curr->next = newNode;
}

int main() {
    Node* head = createNode(10);
    insertEnd(head, 20);
    insertEnd(head, 30);

    cout << "Initial list:\n";
    printList(head);

    insertFront(head, 5);
    cout << "After insertFront(5):\n";
    printList(head);

    insertMiddle(head, 15, 3); // insert 15 at position 3
    cout << "After insertMiddle(15, 3):\n";
    printList(head);

    cout << "Find value 30: Position " << findNode(head, 30) << endl;

    return 0;
}
