/* Find factors and prime factors of a given number */

#include<iostream>

#define log(x) std:: cout << x
#define read(x) std:: cin >> x

void factors(int num);			//function_1 to find factors of the number
int check_prime(int n);			//function_2 to check if number is prime or not

int main()						//main function
{
	int number;
	
	log("Enter the number: ");
	read(number);				//reading the number from the user
	
	factors(number);			//calling function_1 to find factors
	
return 0;
}								//end of main function

void factors(int num)			//function_1 to find factors of the number
{
	log("\nFactors: 1, ");		//1 is a factor of every number
	
	//factors
	for(int i = 2; i < num; i++)				
	{	
		if(num % i == 0)
			log(i << ", ");		//printing factors
		else
			continue;
	}
	log(num);					//every number is a factor of itself
	
	log("\nPrime Facotrs: ");			

	//prime factors
	for(int i = 2; i < num; i++)		//loop for factors				
	{	
		if(num % i == 0)				//if i is a factor of num
			if(check_prime(i) == 0)		//check if it's prime by calling function_2 
				continue;				//if not then go to next iteration
		else
			log(i << " ");				//else print it
	}
}										//end of function_1

int check_prime(int n)              	//function_2 to check if number is prime or not
{
	//loop for factors
	if(n == 2)							//2 is a prime factor
		return 1;
    for(int j = 2; j < n; j++)		
    {
        if(n % j == 0)          		//number is not prime
            return 0;
        else                    		//number is prime
            continue;
    }

return 1;
}										//end of function_2
