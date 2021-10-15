// FIFO - First In First Out
#include<iostream>

#define n 100

class queue{
    int* arr;
    int front;
    int back;

    public:
            queue(){
                arr= new int[n];
                front= -1;
                back= -1;
            }

            void push(int x){
                if(back== n-1){
                    std:: cout << "Queue Overflow" << std:: endl;
                    return;
                }
                back++;
                arr[back]= x;

                if(front==-1){
                    front++;
                }
            }

            void pop(){
                if(front== -1 || front> back){
                    std:: cout << "Queue Empty" << std:: endl;
                    return;
                }
                front++;
            }

            int peek(){
                if(front== -1 || front> back){
                    std:: cout << "Queue Empty";
                    return -1;
                }
                return arr[front];
            }

            bool empty(){
                if(front== -1 || front> back){
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