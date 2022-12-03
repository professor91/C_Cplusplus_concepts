/* 
Test Sparse Matrix:
{       1  2  3  4
        |  |  |  |
        V  V  V  V
    1-> 1  0  0  3
    2-> 0  2  0  0
    3-> 0  0  4  0
    4-> 5  7  0  0
}
Test Sparse Matrix:
{       1  2  3  4
        |  |  |  |
        V  V  V  V
    1-> 7  0  0  0
    2-> 0  5  1  0
    3-> 0  0  2  0
    4-> 5  0  0  0
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
void addNode(Node*&, int, int, int);
Node* add(Node*, Node*);
Node* substract(Node*, Node*);

int main(){
    Node* head1= new Node(1,1,1);
    Node* head2= new Node(1,1,7);

    addNode(head1, 1, 4, 3);
    addNode(head1, 2, 2, 2);
    addNode(head1, 3, 3, 4);
    addNode(head1, 4, 1, 5);
    addNode(head1, 4, 2, 7);

    addNode(head2, 2, 2, 5);
    addNode(head2, 2, 3, 1);
    addNode(head2, 3, 3, 2);
    addNode(head2, 4, 1, 5);

    print(head1);
    print(head2);

    printf("\nMatrix after addition:");
    print(add(head1, head2));
    printf("\nMatrix after substraction:");
    print(substract(head1, head2));

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

void addNode(Node*& head, int i, int j, int val){

    Node* newnode= new Node(i, j, val);

    if(head==NULL){
        head= newnode;
        return;
    }

    Node* temp= head;

    while (temp->_next != NULL){
        temp= temp->_next;
    }
    temp->_next= newnode;
}

Node* add(Node* head1, Node* head2){
    Node* sumlist= NULL;

	while(head1!=NULL && head2!=NULL){
        if(head1->_i == head2-> _i){
            if(head1->_j == head2-> _j){
                addNode(sumlist, head1->_i, head1->_j, head1->_val + head2->_val);
                head1= head1->_next;
                head2= head2->_next;
            }
            else if(head1->_j < head2->_j){
                addNode(sumlist, head1->_i, head1->_j, head1->_val);
                head1= head1->_next;
            }
            else{
                // head2->_j < head1->_j
                addNode(sumlist, head2->_i, head2->_j, head2->_val);
                head2= head2->_next;
            }
        }
        else if(head1->_i < head2->_i){
            addNode(sumlist, head1->_i, head1->_j, head1->_val);
            head1= head1->_next;
        }
        else{
            // head2->_i < head1->_i
            addNode(sumlist, head2->_i, head2->_j, head2->_val);
            head2= head2->_next;
        }
	}

    if(head1 != NULL){
        Node* temp= sumlist;
        while(temp->_next != NULL){
            temp= temp->_next;
        }
        temp->_next= head1;
    }
    if(head2 != NULL){
        Node* temp= sumlist;
        while(temp!=NULL){
            temp= temp->_next;
        }
        temp->_next= head2;
    }

return sumlist;
}

Node* substract(Node* head1, Node* head2){
    Node* sublist= NULL;

	while(head1!=NULL && head2!=NULL){
        if(head1->_i == head2-> _i){
            if(head1->_j == head2-> _j){
                addNode(sublist, head1->_i, head1->_j, head1->_val - head2->_val);
                head1= head1->_next;
                head2= head2->_next;
            }
            else if(head1->_j < head2->_j){
                addNode(sublist, head1->_i, head1->_j, head1->_val);
                head1= head1->_next;
            }
            else{
                // head2->_j < head1->_j
                addNode(sublist, head2->_i, head2->_j, -1 * (head2->_val));
                head2= head2->_next;
            }
        }
        else if(head1->_i < head2->_i){
            addNode(sublist, head1->_i, head1->_j, head1->_val);
            head1= head1->_next;
        }
        else{
            // head2->_i < head1->_i
            addNode(sublist, head2->_i, head2->_j, -1 * (head2->_val));
            head2= head2->_next;
        }
	}

    if(head1 != NULL){
        Node* temp= sublist;
        while(temp->_next != NULL){
            temp= temp->_next;
        }
        temp->_next= head1;
    }
    if(head2 != NULL){
        Node* temp= sublist;
        while(temp!=NULL){
            temp= temp->_next;
        }
        temp->_next= head2;
    }

return sublist;
}
