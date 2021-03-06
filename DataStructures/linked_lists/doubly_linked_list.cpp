/** Doubly linked List
 *  In doubly linked list each Node stores data and address of both its
 *  previous and next nodes
 *  and in the last node stores the address of first node
 * 
 *  This way we can move back and forth from any node
 * 
 */
#include<iostream>

class Node{
    public:
            Node* prev;
            int data;
            Node* next;

            Node(int x){
                prev=NULL;
                data=x;
                next=NULL;
            }
};

void print(Node*);                  //print the linked list
void insertAtHead(Node*&, int);     //insert a node at head of linked list
void insertAtTail(Node*&, int);     //insert a node at tail of linked list
void deletion(Node*&, int);         //delete a node from the linked list
void deleteAtHead(Node*&);          //delete head node from the linked list
bool search(Node*, int);            //search in linked list

int main(){
    Node* first = NULL;

    // allocating memory in heap for first element
    first = new Node(1);

    // inserting a node at tail
    insertAtTail(first, 2);
    insertAtTail(first, 3);
    insertAtTail(first, 4);
    print(first);

    // inserting a node at head
    insertAtHead(first, 0);
    print(first);

    // deleting a node from some position
    deletion(first, 3);
    print(first);

    // deleting a node from first
    deleteAtHead(first);
    print(first);

    // searching for a value in linked list
    std:: cout << search(first, 8) << " " << search(first, 3) << std:: endl;

return 0;
}

void print(Node* n){
    while (n != NULL){
        std::cout << n->data << "->";
        n= n->next;
    }
    std::cout << "NULL" << std:: endl;
}

void insertAtHead(Node* &head, int data){

    Node* newnode= new Node(data);
    newnode->next= head;
    if(head != NULL){
        head->prev= newnode;
    }

    head= newnode;
}

void insertAtTail(Node* &head, int data){
    
    if(head == NULL){
        insertAtHead(head, data);
        return;
    }

    Node* newnode= new Node(data);
    Node* temp= head;

    while(temp->next != NULL){
        temp= temp->next;
    }

    temp->next= newnode;
    newnode->prev= temp;
}

void deletion(Node*& head, int pos){

    if(pos== 1){
        deleteAtHead(head);
        return;
    }
    Node* temp= head;
    int count= 1;

    while(temp != NULL && count != pos){
        temp= temp->next;
        count++;
    }

    temp->prev->next= temp->next;
    if(temp->next != NULL){
        temp->next->prev= temp->prev;
    }

    delete temp;

}

void deleteAtHead(Node* &head){
    Node* todelete= head;

    head= head->next;
    head->prev= NULL;

    delete todelete;
}

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
