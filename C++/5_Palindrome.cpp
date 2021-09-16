/* Program to reverse the number & check for palindrome */

#include<iostream>

#define log(x) std:: cout << x
#define read(x) std:: cin >> x

int reverse(int);                           //function_1 to reverse the number
void palindrome(int);                       //function_2 to check the palindrome

int main()                                  //main function
{
    int num;

    log("Enter the number: ");
    read(num);								//reading the number from the user
    
    palindrome(num);                        //calling function_2
return 0;
}											//end of main function

int reverse(int num)			            //function_1 to reverse the number
{
    int rem, rev_num = 0;                   //'rev_num' is an integer variable to store the reversed number

    while(num)                              //while num is not null
    {
        rem = num % 10;	    			    //taking the last digit and adding to 'sum'
        rev_num = rev_num   * 10 + rem;       //adding it to the reverse number
		num /= 10;	                        //removing the last digit from the number
    }
return rev_num;
}										    //end of function_1

void palindrome(int num)                    //function_2 to check the palindrome
{
    int rev_num;
    
    rev_num = reverse(num);                 //calling function_1 to reverse the number
    log("\nReversed Number is: "<< rev_num); 

    if( num == rev_num)                     //checking if number is palindrome or not
        log("\nNumber is palindrome!");
    else
        log("\nNumber is not palindrome!");
}                                           //end of function_2