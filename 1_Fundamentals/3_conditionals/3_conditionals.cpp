#include<iostream>
using namespace std;

int main() {

    int a= 5, b= 3;

    //1. if-else statement
    if (a>b) {
        cout << a << " is greater";
    }
    else {
        cout << b << " is greater";
    }

    //2. if-else if-else statement
    if (a>b) {
        cout << a << " is greater";
    }
    else if (b>a) {
        cout << b << " is greater";
    }
    else {
        cout << "a and b are equal";
    }

    //3. ternary operator
    a>b ? cout << a << " is greater" : cout << b << " is greater";
    
    //4. switch case
    int choice;

    switch (choice) {
        
        case 1  :   cout << "In case 1";
                    break;
        case 2  :   cout << "In case 2";
                    break;
        case 3  :   cout << "In case 3";
                    break;
        default :   cout << "In default case";
    }
}