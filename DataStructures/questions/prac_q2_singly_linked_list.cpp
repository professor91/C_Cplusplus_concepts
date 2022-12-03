/* 
3. Singly linked list:
    (i   Insert an element x at the beginning of the singly linked list              check
    (ii  Insert an element x at i th position in the singly linked list  
    (iii Remove an element from the beginning of the singly linked list             check
    (iv  Remove an element from i th position in the singly linked list             check
    (v   Search for an element x in the singly linked list and return its pointer check
    (vi  Concatenate two singly linked lists
*/

#include<iostream>

class Node{
    public:
            int data;
            Node* next;

            Node(){
                data=-1;
                next=NULL;
            }

            Node(int x){
                data=x;
                next=NULL;
            }
};

void print(Node*);                  // print the linked list
void insert(Node*, int);            // insert a node at ith position
void insertAtHead(Node*&, int);     // insert a node at head of linked list
void deleteAtHead(Node*&);          // delete head node from the linked list
void deletion(Node*&, int);         // delete a node from the linked list
bool search(Node*, int);            // search in linked list
void concatenate(Node*&, Node*&);

int main(){
    Node* first = NULL;
    Node* second = NULL;
    Node* third = NULL;
    Node* fourth = NULL;

    // allocating memory for 3 Nodes in heap
    first = new Node();
    second = new Node(2);
    third = new Node();

    first->data= 1;
    first->next= second;

    // inserting a node at head
    insertAtHead(first, 0);
    print(first);

    // deleting a node from linked list
    deletion(first, 2);
    print(first);

    // deleting the head node from linked list
    deleteAtHead(first);
    print(first);

    // searching for a value in linked list
    std:: cout << search(first, 8) << " " << search(first, 3) << std:: endl;

return 0;
}

// print the linked list
void print(Node* n){
    while (n != NULL){
        std::cout << n->data << "->";
        n= n->next;
    }
    std::cout << "NULL" << std:: endl;
}

// insert a node at head of linked list
void insertAtHead(Node* &head, int data){
    
    Node* newnode= new Node(data);
    newnode->next= head;
    head= newnode;
}

// delete a node from the linked list
void deletion(Node*& head, int key){
    
    if(head == NULL){
        return;
    }

    if(head->next == NULL){
        deleteAtHead(head);
        return;
    }
    
    Node* temp= head;

    while (temp->next->data != key){
        temp= temp->next;
    }

    Node* todelete= temp->next;
    temp->next= temp->next->next;

    delete todelete;
}

// delete head node from the linked list
void deleteAtHead(Node* &head){
    Node* todelete= head;

    head= head->next;
    delete todelete;
}

// search in linked list
bool search(Node* head, int key){
    Node* temp= head;

    while(temp != NULL){
        if(temp->data == key){
            return true;
        }
        temp= temp->next;
    }
return false;
}
