/*
There are two linked lists A and B containing the following data:
A: 7, 5, 3, 1, 20
B: 6, 25, 32, 11, 9

Write a function to combine the two lists such that the resulting list contains node in the following
elements:
7, 6, 5, 25, 3, 32, 1, 11, 20, 9

You are not allowed to create any additional node while writing the function.
*/

// A: 7->5->3->1->20->NULL
// B: 6->25->32->11->9->NULL
// Result: 7->6->5->25->3->32->1->11->9->NULL

#include<iostream>

class Node{

    public:
            int _data;
            Node* _next;

            Node(int data){
                this->_data= data;
                this->_next= NULL;
            }
};

void print(Node*);
void insertAtTail(Node*&, int);

// recursive function to get the desired result
void func(Node*&, Node*&);

int main(){
    Node* A= NULL;
    
    insertAtTail(A, 7);
    insertAtTail(A, 5);
    insertAtTail(A, 3);
    insertAtTail(A, 1);
    insertAtTail(A, 20);

    Node* B= NULL;

    insertAtTail(B, 6);
    insertAtTail(B, 25);
    insertAtTail(B, 32);
    insertAtTail(B, 11);
    insertAtTail(B, 9);

    print(A);
    print(B);

    std:: cout << "\n";

    func(A->_next, B);
    A->_next= B;

    print(A);
return 0;
}

void print(Node* n){
    while (n != NULL){
        std::cout << n->_data << "-> ";
        n= n->_next;
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

    while(temp->_next != NULL){
        temp= temp->_next;
    }

    temp->_next= newnode;
}

void func(Node*& A, Node*& B){
    if(A == NULL){
        return;
    }
    else{
        func(A->_next, B->_next);
        A->_next= B->_next;
        B->_next= A;
    }
}