/* Performing basic arithematic operations on fractions using class */

#include<iostream>

#define log(x) std:: cout << x
#define read(x) std:: cin >> x

class fraction						//class 'fraction' declared 
{
	private:
			int num;				//will store numerator of the fraction
			int denom;				//will store denominator of the fraction

	public:
			fraction(int n, int d)	//constructor to initialize the 'num' & 'denom'
			{
				num = n;
				denom = d;
			}

			void add(const fraction&);			//prototype of function_1 to do the arithematic addition
			void subtract(const fraction&);		//prototype of function_2 to do the arithematic substraction
			void multiply(const fraction&);		//prototype of function_3 to do the arithematic multiplication
			void divide(const fraction&);		//prototype of function_4 to do the arithematic division
			int gcd(int, int);					//prototype of function_5 to find the GCD of two numbers
};

int main()							//main function
{
	int n, d;
	int choice;

	log("Enter the value of numerator and denominator of fraction 1: ");
	read(n >> d);					
	fraction f1(n, d);				//declared and initialized first fraction

	log("Enter the value of numerator and denominator of fraction 2: ");
	read(n >> d);
	fraction f2(n, d);				//declared and initialized second fraction
	
	log("1. Add\t2. Subtract\t3. Multiply\t4. Divide");
	log("\nEnter your choice: ");
	read(choice);					//reading choice from user

	switch(choice)
	{
		case 1	:	f1.add(f2);			//calling function_1
					break;

		case 2	:	f1.subtract(f2);	//calling function_2
					break;

		case 3	:	f1.multiply(f2);	//calling function_3
					break;

		case 4	:	f1.divide(f2);		//calling function_4
					break;

		default :	log("\nWrong Choice!!!");
					break;
	}

return 0;
}									//end of main function

void fraction:: add(const fraction& f1){			//function_1 to do the arithematic addition

	int temp_num, temp_denom, hcf;
	
	temp_num = ( (num * f1.denom) + (f1.num * denom) );
	temp_denom = ( ( denom * f1.denom ) );	
	
	hcf = gcd(temp_num, temp_denom);				//calling function_5

	log(std::endl << temp_num / hcf << "/" << temp_denom / hcf);
}													//end of function_1

void fraction:: subtract(const fraction& f1){		//function_2 to do the arithematic substraction

	signed int temp_num, temp_denom;
	int hcf;
	
	temp_num = ( (num * f1.denom) - (f1.num * denom) );
	temp_denom = ( ( denom * f1.denom ) );	
	
	hcf = gcd(temp_num, temp_denom);				//calling function_5

	log(std::endl << temp_num / hcf << "/" << temp_denom / hcf);
}													//end of function_2

void fraction:: multiply(const fraction& f1){		//function_3 to do the arithematic multiplication
	
	int temp_num, temp_denom, hcf;
	
	temp_num = (num * f1.num);
	temp_denom = (denom * f1.denom);	
	
	hcf = gcd(temp_num, temp_denom);				//calling function_5

	log(std::endl << temp_num / hcf << "/" << temp_denom / hcf);
}													//end of function_3

void fraction:: divide(const fraction& f1){			//function_4 to do the arithematic division
	
	int temp_num, temp_denom, hcf;
	
	temp_num = (num * f1.denom);
	temp_denom = (denom * f1.num);	
	
	hcf = gcd(temp_num, temp_denom);				//calling function_5

	log(std::endl << temp_num / hcf << "/" << temp_denom / hcf);
}													//end of function_4

int fraction::gcd(int num1, int num2)				//function_5 to find the GCD of two numbers
{
	if(num1 < 0)	{	num1 *= -1;	}
	if(num2 < 0)	{	num2 *= -1;	}
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

return num1;										//returning the result
}													//end of function_1
