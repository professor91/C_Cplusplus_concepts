// LIFO - Last In First Out
#include<iostream>

#define n 100

class stack{

    int* arr;
    int top;

    public:

            stack(){
                arr= new int[n];
                top= -1;
            }

            void push(int x){
                if (top == n-1){
                    std:: cout << "Stack Overflow!" << std::endl;
                    return;
                }
                    
                top++;
                arr[top]= x;
            }

            void pop(){
                if(top == -1){
                    std:: cout << "Stack is empty!" << std::endl;
                    return;
                }

                top--;
            }

            int Top(){
                if(top == -1){
                    std:: cout << "Stack is empty" << std::endl;
                    return -1;
                }
                
                return arr[top];
            }

            bool empty(){
                return top == -1;
            }
};

int main(){
    stack s;

    s.push(1);
    s.push(2);
    s.push(3);

    std:: cout << s.Top() << std:: endl;

    s.pop();

    std:: cout << s.Top() << std:: endl;

    s.pop();
    s.pop();

    std:: cout << s.Top() << std:: endl;
    std:: cout << s.empty() << std:: endl;

return 0;
}