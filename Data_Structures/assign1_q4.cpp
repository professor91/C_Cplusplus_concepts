/* 
Write a program to build a spare matrix as a linked list.
The program should provide functions for following operations:
    -Store an element when the row number, column number and the value is provided.
    -Retrieved an element for the given row and column number of the matrix.

Assumption:- Sparse matrix don't have any negative element

Test Sparse Matrix:
{       1  2  3  4  5
        |  |  |  |  |
        V  V  V  V  V
    1-> 0  0  1  0  3
    2-> 0  2  0  0  0
    3-> 0  0  0  4  0
    4-> 5  0  7  0  0
    5-> 0  0  6  0  0
}
*/

#include<iostream>

class Node{
    public:
            int _i;
            int _j;
            int _val;
            Node* _next;

            Node(int i, int j, int val){
                this->_i= i;
                this->_j= j;
                this->_val= val;
                this->_next= NULL;
            }
};

void print(Node*);
void add(Node*&, int, int, int);
int get(Node*, int, int);

int main(){
    Node* headnode= new Node(1,3,1);

    add(headnode, 1, 5, 3);
    add(headnode, 2, 2, 2);
    add(headnode, 3, 4, 4);
    add(headnode, 4, 1, 5);
    add(headnode, 4, 3, 7);
    add(headnode, 5, 3, 6);

    print(headnode);

    int i, j;
    // int val;
    
    i=3; j=4;
    if(get(headnode, i,j) == -1){
        printf("\nElement at indexes (%d, %d) is: %d", i,j,0);
    }
    else{
        printf("\nElement at indexes (%d, %d) is: %d", i,j,get(headnode, i,j));
    }

    i=3; j=5;
    if(get(headnode, i,j) == -1){
        printf("\nElement at indexes (%d, %d) is: %d", i,j,0);
    }
    else{
        printf("\nElement at indexes (%d, %d) is: %d", i,j,get(headnode, i,j));
    }

std:: cout << std:: endl;
return 0;
}

void print(Node* n){
    while (n != NULL){
        std:: cout << "\n|" << "->";
        std::cout << "(" << n->_i << "," << n->_j << ")" << "= " << n->_val;
        n= n->_next;
    }
    std::cout << std:: endl;
}

void add(Node*& head, int i, int j, int val){

    Node* newnode= new Node(i, j, val);

    if(head==NULL){
        head= newnode;
        return;
    }

    Node* temp= head;

    while (temp->_next != NULL){
        temp= temp->_next;
        // while(i > temp->_i || j > temp->_j){
        //     temp= temp->_next;
        // }
        
        // newnode->_next= temp->_next;
        // temp->_next= newnode;
    }
    temp->_next= newnode;
}

int get(Node* head, int i, int j){

    while(head != NULL){
        if((i==head->_i) && (j==head->_j)){
            return head->_val;
        }
        head= head->_next;
    }
return -1;
}


