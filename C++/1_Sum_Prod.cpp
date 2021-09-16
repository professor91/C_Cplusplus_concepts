/* Program to find the Sum and product of digits of an integer */

#include<iostream>

#define log(x) std:: cout << x
#define read(x) std:: cin >> x

int sum(int);							//prototype of function_1 to find the sum of the digits
int prod(int);				         	//prototype of function_2 to find the product of the digits
void perform(int);						//prototype of function_3 to get the choice for prod/sum from the user and print the result

int main()					    
{
	int num;							//integer variable 'num' to store the number	

	log("Enter the number: ");
	read(num);                          //reading the number

	perform(num);						//calling function_3 to perform the user-preferred operation	
return 0;
}										//end of main function

int sum(int num)						//function_2 to find the sum of the digits
{
	int sum = 0;						//integer variable 'sum' to store the sum
	
	while(num)							//loop until 'num' is not null
	{
		sum += num % 10;				//taking the last digit and adding to 'sum'
		num = (num - num % 10) / 10;	//removing the last digit from the number
	}

return sum;								//returning the sum
}										//end of function_2

int prod(int num)			         	//function_1 to find the product of the digits
{
	int prod = 1;						//integer variable 'prod' to store the product
	
	while(num)							//loop until 'num' is not null
	{
		prod *= num % 10;				//taking the last digit and multiplying with 'prod'
		num = (num - num % 10) / 10; 	//removing the last digit from the number
	}
		
return prod;							//returning the product
}								     	//end of function_2

void perform(int num)
{
	int choice;							//integer variable 'choice' from user

again: 	log("\n1. Sum\t2. Product\nEnter your choice: ");
		read(choice);					//reading the choice
	
	switch(choice)
	{
		case 1	:	log("Sum of the digits of the number is: " << sum(num));		//calling function_1
					break;
		
		case 2	:	log("Product of the digits of the number is: " << prod(num));	//calling function_2
					break;
					
		default :	log("Wrong Input!");
					goto again;						//if 'choice' is wrong then reading it again
	}
}
