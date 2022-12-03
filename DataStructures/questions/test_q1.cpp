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
bool ispositive(int);
void func(Node*);

int main(){
    Node* head = new Node(-7);

    insertAtTail(head, 4);
    insertAtTail(head, -1);
    insertAtTail(head, 3);
    insertAtTail(head, -8);

    printf("Given Linked List: ");
    print(head);

    func(head);

return 0;
}

void print(Node* n){
    while (n != NULL){
        std::cout << n->data << "->";
        n= n->next;
    }
    std::cout << "NULL" << std:: endl;
}

void insertAtTail(Node* &head, int data){

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

bool ispositive(int x){
    if(x >= 0){
        return true;
    }
return false;
}

void func(Node* head){
    Node* poshead= NULL;
    Node* neghead= NULL;

    while(head != NULL){
        if(ispositive(head->data)){
            insertAtTail(poshead, head->data);
            head= head->next;
        }
        else{
            insertAtTail(neghead, head->data);
            head= head->next;
        }
    }
    printf("\nPos List: ");
    print(poshead);
    printf("\nNeg List: ");
    print(neghead);

}