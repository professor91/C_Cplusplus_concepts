/** Queue
 *  FIFO - First In First Out
 *  Impleted with linked lists
 */

#include<iostream>

class node{
    public:
            int data;
            node* next;

            node(int val){
                data= val;
                next= NULL;
            }
};

class queue{
    
    node* front;
    node* back;

    public:
            queue(){
                front= NULL;
                back= NULL;
            }

            void push(int x){
                node* n= new node(x);

                if(front == NULL){
                    back= n;
                    front= n;
                    return;
                }

                back->next= n;
                back= n;
            }

            void pop(){
                if(front == NULL){
                    std:: cout << "Queue Empty" << std:: endl;
                    return;
                }

                node* todelete= front;
                front= front-> next;

                delete todelete;
            }

            int peek(){
                if(front == NULL){
                    std:: cout << "Queue Empty" << std:: endl;
                    return -1;
                }

                return front->data;
            }

            bool empty(){
                if(front == NULL){
                    return true;
                }
                return false;
            }
};

int main(){
    queue q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    std:: cout << q.peek() << std::endl;
    q.pop();
    std:: cout << q.peek() << std::endl;
    q.pop();
    std:: cout << q.peek() << std::endl;
    q.pop();
    std:: cout << q.peek() << std::endl;
    q.pop();

    std:: cout << q.empty() << std:: endl;

return 0;
}