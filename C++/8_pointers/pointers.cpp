#include<iostream>

int main(){
    int x = 10;
    int* p;

    p= &x;

    std:: cout << "Address of x is: " << p << std:: endl;
    std:: cout << "Value of x is:" << *p << std:: endl;

return 0;
}