/*  Inheritance vs Objects
 *  When working with classes 
 *  we can either create objects (instances of class ) to access it's variables or
 *  we can inherit it to another class and access it's objects
 *  
 *  When we create objects memory is allocated to the object according to it's class
 *  but when we inherit new memory is not allocated for the 
 * 
*/
#include<iostream>

using namespace std;

class A {
    public:
            int x= 10;
            A() {
                cout << "\nA " << &x << endl;
                
            }
};

class B: public A {
    public:
    B() {
        cout << "\nB " << &x << endl;
    }
    
};

class C: public A {
    public:
    C(){
        cout << "\nC " << &x << endl;
    }
};

int main() {
    B a;
    B b;
    C c;
    return 0;
}