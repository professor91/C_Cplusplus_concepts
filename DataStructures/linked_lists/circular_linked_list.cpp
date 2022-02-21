/** Circular Linked List
 *  Similar to linked list, circular linked list have Nodes and each node 
 *  stores data and address of its next node.
 *
 *  Only difference is the last node stores address of First node instead of NULL
 * 
 *  This way the there is no last node in the linked list, since the node 
 *  which was supposed to be last is pointing to First node as it's next node
 */

#include<iostream>

class Node{
    public:
            int data;
            Node* next;

            Node(int x){
                data=x;
                next=NULL;
            }
};

void print(Node*);
void insertAtHead(Node*&, int);
void insertAtTail(Node*&, int);
void deletion(Node*&, int);
void deleteAtHead(Node*&);
bool search(Node*, int);

int main(){
    Node* first = NULL;
    
    // allocating memory in heap for first element
    // first = new Node(1);

    // inserting a node at tail
    insertAtTail(first, 1);
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

void print(Node* head){
    Node* temp= head;

    do{
        std::cout << temp->data << "->";
        temp= temp->next;
    }while(temp != head);
    
    std:: cout << temp->data << std:: endl;
}

void insertAtHead(Node* &head, int data){

    Node* newnode = new Node(data);
    Node* temp= head;
    
     if(head==NULL){
        newnode->next= newnode;
        head= newnode;
        return;
    }

    while(temp->next != head){
        temp= temp->next;
    }

    temp->next= newnode;
    newnode->next= head;
    head= newnode;
}

void insertAtTail(Node* &head, int data){

    if(head == NULL){
        insertAtHead(head, data);
        return;
    }
    
    Node* newnode= new Node(data);
    Node* temp= head;

    while(temp->next != head){
        temp= temp->next;
    }

    temp->next= newnode;
    newnode->next= head;
}

void deletion(Node* &head, int pos){

    if(pos == 1){
        deleteAtHead(head);
        return;
    }

    Node* temp= head;
    int count= 1;

    while(count != pos-1){
        temp= temp->next;
        count++;
    }

    Node* todelete= temp->next;
    temp->next= temp->next->next;


}

void deleteAtHead(Node* &head){
    Node* temp= head;

    while (temp->next != head){
        temp= temp->next;
    }

    Node* todelete= head;
    temp->next= head->next;
    head= head->next;

    delete todelete;
}

bool search(Node* head, int key){
    Node* temp= head;

    do{
        if(temp->data == key){
            return true;
        }
        temp= temp->next;
    }while(temp != head);
    
return false;
}