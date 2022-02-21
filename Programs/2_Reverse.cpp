/* Program to read a number and print reverse of it */

#include<iostream>

#define log(x) std:: cout << x
#define read(x) std:: cin >> x

void reverse(int num);                  //function_1 to reverse the number

int main()                              //main function
{
    int num;                            //integer variable 'num' to store the number that will be reversed   				

    // log("Enter the number: ");
    // read(num);                          //reading the number
    
	reverse(num);					    //calling function_1 to reverse the number

return 0;
}										//end of main function

void reverse(int num)			        //function_1 to reverse the number
{
    int rem, rev_num = 0;               //'rev_num' is an integer variable to store the reversed number
    num = 001;
    while(num)                          //until num is not null
    {
        rem = num % 10;	    			    //taking the last digit and adding to 'sum'
        rev_num = rev_num * 10 + rem;       //adding it to the reversed number
        if(rem == 0)
            rev_num *= 100;
		num /= 10;	                        //removing the last digit from the number
    }

    log("Reversed number: " << rev_num);    //printing the reversed number
}										    //end of function_1