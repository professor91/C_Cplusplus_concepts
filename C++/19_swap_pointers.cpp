/* Program to swap two numbers using pointers */

#include<iostream>

#define log(x) std:: cout << x
#define read(x) std:: cin >> x

void swap(int*, int*);              //prototype of function_1 to swap the numbers

int main()
{
    int num1, num2;
    int* ptr1 = &num1;
    int* ptr2 = &num2;

    log("Enter the numbers: ");
    read(num1 >> num2);

    swap(ptr1, ptr2);               //calling function_1

    log("\nSwaped numbers are: " << *ptr1 << " & " << *ptr2);

return 0;
}                                   //end of main function

void swap(int* n, int* m)           //function_1 to swap the numbers
{
    int temp;
    
    temp = *n;
    *n = *m;
    *m = temp;
}                                  //end of function_1     