/** Linked List
 *  It is also list of elements but the way they are stored is different
 *  Each element is called a Node and each node contains 
 *  data of the element & address of the next node
 *  And the last node stores NULL in address
 *  
 *  By storing data this way we don't need to allocate continuous memory
 *  to the list, since each node stores address of memory block where the 
 *  next element is saved.
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

void print(Node*);
void insertAtHead(Node*&, int);
void insertAtTail(Node*, int);
void deletion(Node*&, int);
void deleteAtHead(Node*&);
bool search(Node*, int);
int getNode(Node*, int);
Node* removeDuplicates(Node*);

int main(){
    Node* first = NULL;
    Node* second = NULL;

    // allocating memory for 3 Nodes in heap
    first = new Node();
    second = new Node(2);

    first->data= 1;
    first->next= second;

    // inserting a node at tail
    insertAtTail(first, 3);
    print(first);
    insertAtTail(first, 4);

    // inserting a node at head
    insertAtHead(first, 0);
    print(first);

    // find node give position from tail
    std:: cout << getNode(first, 2) << std:: endl;

    // deleting a node from linked list
    deletion(first, 2);
    print(first);

    // deleting the head node from linked list
    deleteAtHead(first);
    print(first);

    insertAtTail(first, 4);
    insertAtTail(first, 5);
    insertAtTail(first, 5);
    // delete duplicates
    print(removeDuplicates(first));

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
    head= newnode;
}

void insertAtTail(Node* head, int data){

    Node* newnode = new Node(data);

    if(head == NULL){
        head= newnode;
        return;
    }

    Node* temp= head;

    while(temp->next != NULL){
        temp= temp->next;
    }

    temp->next= newnode;
}

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

void deleteAtHead(Node* &head){
    Node* todelete= head;

    head= head->next;
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

int getNode(Node* head, int positionFromTail) {

    Node* temp= head;
    int len= 0;
    
    while (temp != NULL) {
        len++;
        temp= temp->next;
    }
    
    int pos= len- positionFromTail-1;
    temp= head;
    
    for(int i= 0; i< pos; i++){
        temp= temp->next;
    }
return temp->data;
}

Node* removeDuplicates(Node* head) {
    Node* temp= head;
    Node* temp1;
    
    while (temp != NULL) {
        temp1 = temp->next;
        while(temp1 != NULL){
            if(temp->data == temp1->data){
                Node* todelete= temp1;
                temp->next= temp->next->next;
                delete todelete;
                break;
            }
            temp1= temp1->next;
        }
        temp= temp->next;
    }
    
return head;
}