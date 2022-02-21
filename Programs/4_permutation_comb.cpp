#include<iostream>

#define log(x) std :: cout << x 
#define read(x) std :: cin >> x

int factorial(int);                     //prototype for function_1 to calculate the factorial
float permutation(int, int);            //prototype of function_1 to compute the permutation
float combination(int, int);            //prototype of function_1 to compute the permutation

int main()                              //main function
{
    int n, r, choice;

    log("Enter the value of n: ");
    read(n);                            //reading the value of n from the user
    log("Enter the value of r: ");
    read(r);                            //reading the value of r from the user

again:  log("1. Compute Permutation\t2. Compute Combination\nEnter your choice:  ");
        read(choice);

    switch (choice)
    {
        case 1  :   log("\nResult is: " << permutation(n,r));   //calling function_1
                    break;

        case 2  :   log("\nResult is: " << combination(n,r));   //calling function_2
                    break;
      
        default :   log("\nWrong choice!!!");
                    goto again;
        }

return 0;
}                                       //end of main function

int factorial(int n)                    //function_1 to compute the factorial of the number
{
    for(int i = n-1; i > 1; i--)        //loop for computing factorial
        n *= i;
   
return n;                               //returning the value of factorial
}                                       //end of function_1

float permutation(int n, int r)         //function_1 to compute the permutation
{
    return (factorial(n) / factorial(n-r));
}

float combination(int n, int r)         //function_1 to compute the combination
{   
    return (factorial(n) / (factorial(r) * factorial(n-r)));
}