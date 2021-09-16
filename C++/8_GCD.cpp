/* Program to find GCD of two numbers */

#include<iostream>

#define log(x) std:: cout << x
#define read(x) std:: cin >> x

int gcd(int num1, int num2);		//prototype of function_1 to find the GCD of two numbers

int main()							//main function
{
	int num1, num2, result;

	log("\nEnter the numbers of which you wanna find GCD: ");
	read(num1 >> num2);				//reading the numbers from the user

	result = gcd(num1, num2);		//calling function_1

	log("\nGCD of " << num1 << " & " << num2 << " is: ");
	log(result);					//printing the gcd of numbers

	return 0;
}									//end of main function

int gcd(int num1, int num2)			//function_1 to find the GCD of two numbers
{
	/* 
		until both numbers are not equal
		keep subtracting the smaller from the larger
	*/
	while(num1 != num2)				
	{
		if(num1 > num2)
			num1 -= num2;

		else
			num2 -= num1;
	}

return num1;						//returning the result
}									//end of function_1