/*
There are two linked lists A and B containing the following data:
a. A: 3, 7, 10, 15, 16 9, 22, 17, 32
B: 16, 2, 9, 13, 37, 8, 10, 1, 28

Write a program to create:-
- A linked list C that contains only those elements that are common in linked list A and B.
- A linked list D which contains all elements of A as well as B ensuring that there is no repetition of elements.
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
void insertAtTail(Node*&, int);

void funcA(Node*, Node*);
void funcB(Node*, Node*);
Node* delduplicate(Node*);

int main(){
    Node* A= NULL;
    
    insertAtTail(A, 3);
    insertAtTail(A, 7);
    insertAtTail(A, 10);
    insertAtTail(A, 15);
    insertAtTail(A, 169);
    insertAtTail(A, 22);
    insertAtTail(A, 17);
    insertAtTail(A, 32);

    Node* B= NULL;

    insertAtTail(B, 2);
    insertAtTail(B, 16);
    insertAtTail(B, 2);
    insertAtTail(B, 9);
    insertAtTail(B, 13);
    insertAtTail(B, 37);
    insertAtTail(B, 8);
    insertAtTail(B, 10);
    insertAtTail(B, 1);
    insertAtTail(B, 28);

    print(A);
    print(B);

    std:: cout << "\n";
    funcA(A, B);

    std:: cout << "\n";
    funcB(A, B);

    std:: cout << std:: endl;

return 0;
}

void print(Node* n){
    while (n != NULL){
        std::cout << n->data << "-> ";
        n= n->next;
    }
    std::cout << "NULL" << std:: endl;
}

void insertAtTail(Node*& head, int data){

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

void funcA(Node* A, Node* B){
    Node* C= NULL;

    while (A != NULL){
        Node* temp= B;
        while (temp!= NULL){
            if(A->data == temp->data){
                insertAtTail(C, A->data);
            }
            temp= temp->next;
        }
        A= A->next;
    }

    print(C);
}

void funcB(Node* A, Node* B){
    Node* C= NULL;

    Node* temp= A;
    while (temp != NULL){
        insertAtTail(C, temp->data);
        temp= temp->next;
    }

    temp= B;    
    while (temp != NULL){
        insertAtTail(C, temp->data);
        temp= temp->next;
    }

    C= delduplicate(C);

    print(C);
}

Node* delduplicate(Node* C){
    Node* head= C;
    Node* temp;

    int x,y;

    while (C != NULL){
        temp= C;
        while (temp->next != NULL){
            x= C->data;
            y= temp->next->data;
            if(C->data == temp->next->data){
                Node* todelete= temp->next;
                temp->next= temp->next->next;
                delete todelete;
            }
            temp= temp->next;
        }
        C= C->next;
    }
return head;
}