/* Program to print Fibonacci series */

#include<iostream>

#define log(x) std:: cout << x
#define read(x) std:: cin >> x

void fibonacci(int);                    //prototype of function_1 to print n numbers of fibonacci series 

int main()                              //main function
{
    int n;

    log("Enter the number of number of Fibonacci series you wanna print: ");
    read(n);                            //reading value of n from the user

    fibonacci(n);                       //calling function_1
    
    return 0;
}

void fibonacci(int n)                   //prototype of function_1 to print n numbers of fibonacci series 
{
    int previous = 0, current = 1, result = 1;

    for(int i = 0; i < n; i++)          //loop for printing the series
    {
        log(result << " ");
        /*
            Logic for Fibonacci series
            current_value = (n-1)th value + (n-2)th value
        */
        result = previous + current;    
        previous = current;
        current = result;
    }
}                                       //end of function_1