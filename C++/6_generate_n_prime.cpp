/* Program to generate first n prime numbers */

#include<iostream>

#define log(x) std:: cout << x
#define read(x) std:: cin >> x

void initiate();                            //prototype of function_1 to read choice from the user
bool check_prime(int n);                    //prototype of function_2 to check if the given number is prime or not
void generate_prime_1(int n);               //prototype of the function_3 to generate first n prime numbers
void generate_prime_2(int n);               //prototype of the function_4 to generate first n prime numbers
void generate_prime_3(int m, int n);        //prototype of the function_5 to generate n prime numbers starting from m

int main()                                  //main function
{
    initiate();                             //calling function_1
    
return 0;
}                                           //end of main function

void initiate()                             //function_1 to read choice from the user
{
    int num, num_end, choice;

    log("1. Generate first n prime numbers\n2. Generate prime numbers upto n\n3. Generate prime numbers from m to n");
    log("\nEnter your choice: ");
    read(choice);                           //reading choice from the user

    switch (choice)
    {
        case 1  :   log("\nEnter how many prime numbers you wanna generate: ");
                    read(num);
                    generate_prime_1(num);              //calling function_1
                    break;

        case 2  :   log("\nEnter upto which number you wanna generate prime numbers: ");
                    read(num);
                    generate_prime_2(num);              //calling function_2
                    break;

        case 3  :   log("\nEnter number from where you wanna generate prime numbers: ");
                    read(num);
                    log("\nEnter upto which number you wanna generate prime numbers: ");
                    read(num_end);
                    generate_prime_3(num, num_end);     //calling function_3
                    break;

        default :   log("\nWrong choice!!!");
    }
}                                           //end of function_1

bool check_prime(int n)                     //function_2 to check if the given number is prime or not
{
    for(int i = 2; i <  n; i++)             //loop for factors
    {
        if(n % i == 0)                      //number is not prime
            return false;
    }

return true;
}                                           //end of function_2

void generate_prime_1(int n)                //function_3 to generate first n prime numbers is working fine
{
    int k = 0, i  = 3;
    log("\nPrime numbers: 2");
    while(k < n -1)                         //loop for number of prime numbers
    {
        if(check_prime(i))                  //if it's prime then print it
        {        
            log(", " << i);
            k++;
        }
        i++;                                //else check for next
    }
}                                           //end of function_3

void generate_prime_2(int n)                //function_4 to generate the prime numbers upto 
{
    int k = 3;
    log("\nPrime numbers: 2");              //2 is the first prime number
    
    while(k < n + 1)                        //loop to track of numbers list
    {
        if(check_prime(k))                  //if prime then print it
        {
            log(", " << k);
            k++;
        }
        else                                //forget it and move on
        {
            k++;
        }
    }
}                                           //end of function_4

void generate_prime_3(int m, int n)         //function_1 to generate n prime numbers starting from m
{
    log("\nPrime numbers: ");
    if(m <= 2)
		log("2");                           //2 is the first prime number

    while(m < n + 1)                        //loop for number of prime numbers
    {
        if(check_prime(m))                  //if prime then print it
        {
            log(", " << m);
            m++;
        }        
        else                                //forget it and move                  
        {
            m++;
        }
    }
}                                           //end of function_1