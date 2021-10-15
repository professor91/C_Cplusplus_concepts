// Write a program that reads the name, age, salary of 10 persons and maintains them in a linked list sorted by name.

#include<iostream>

class Node{

    public:
            std:: string _name;
            int _age;
            float _salary;

            Node* _next;

            Node(std::string name, int age, float salary){
                this->_name= name;
                this->_age= age;
                this->_salary= salary;
                this->_next= NULL;
            }
};

void print(Node*);
void insert(Node*&, std::string, int, float);

int main(){
    std:: string name;
    int age;
    float salary;
    Node* headnode= NULL;

    for(int i= 0; i< 10; i++){
        std:: cout << "\nEnter name of the person " << i+1 << ": ";
        std:: cin >> name;
        std:: cout << "Enter age of the person: ";
        std:: cin >> age;
        std:: cout << "Enter salary of the person: ";
        std:: cin >> salary;

        insert(headnode, name, age, salary);
    }
        std:: cout << "\n-------------- Data --------------";
        print(headnode);

    std:: cout << "\n";
return 0;
}

void print(Node* n){
    while (n != NULL){
        std:: cout << "\n|" << "->";
        std::cout << "Name: " << n->_name << ", Age: " << n->_age << ", Salary: " << n->_salary;
        n= n->_next;
    }
}

void insert(Node* &head, std:: string name, int age, float salary){

    Node* newnode = new Node(name, age, salary);

    if(head == NULL){
        head= newnode;
        return;
    }

    Node* temp= head;

    // smallest node
    if(name < temp->_name){
        newnode->_next= head;
        head= newnode;
        return;
    }

    // middle case
    while(temp->_next != NULL){
        while(name > temp->_next->_name){
            temp= temp->_next;
        }
        newnode->_next= temp->_next;
        temp->_next= newnode;
        return;
    }

    // largest node
    temp->_next= newnode;
}