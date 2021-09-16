/* Program to print the sum of series
    1 + 1/2 + 1/3 + 1/4 +...
*/

#include<iostream>

#define log(x); std :: cout << x;
#define read(x); std :: cin >> x;

void sum_series_1(int);                 //prototype of function_1 to compute the sum of the series
void print_series_1(int);               //prototype of function_2 to print the series

int fact(int);                          //prototype of function_3 to calculate the factorial
void sum_series_2(int);                 //prototype of function_4 to compute the sum of the series
void print_series_2(int);               //prototype of function_5 to print the series

void sum_series_3(int);                 //prototype of function_6 to print the sum of the series
void print_series_3(int);               //prototype of function_7 to print the series

int main()                              //main function
{
    int num, choice;

    log("Enter the number: ");
    read(num);                          //reading the number upto which series will be printed
    
    log("\ni.   1 + 1/2 + 1/3...\nii.  1 + 1/2! + 1/3!...\niii. 1 -2 + 3...");
    log("\nEnter your choice: ");
    read(choice);
    log(std:: endl);

    switch(choice)
    {
        case 1  :   sum_series_1(num);      //calling function_1
                    break;

        case 2  :   sum_series_2(num);      //calling function_4
                    break;

        case 3  :   sum_series_3(num);      //calling function_6
                    break;

        default :   log("\nWrong Choice!!!");
    }
    
return 0;
}                                       //end of main function

void sum_series_1(int n)                //function_1 to compute the sum
{
    float sum = 0.0;

    for(int i = 1; i < n+1; i++)
        sum += 1.0/i;                   //computing the sum
    
    print_series_1(n);                  //calling function_2
    log(sum);
}                                       //end of function_1

void print_series_1(int n)              //function_2 to print the series
{
	log("1");
	for(int i = 2; i < n + 1; i++)
	{	
		log(" + " << "1/" << i );
	}
	log(" = ");
}                                       //end of function_2

int fact(int n)                         //function_3 to compute the factorial of the number
{
    int i;

    for(i = n-1; i > 1; i--)            //loop for computing factorial
        n *= i;
   
return n;                               //returning the value of factorial
}                                       //end of function_3

void sum_series_2(int n)                //function_4 to compute the sum
{
    float sum = 0.0;

    for(int i = 1; i < n+1; i++)
        sum += 1.0/fact(i);             //computing the sum
    
    print_series_2(n);                  //calling function_5
    log(sum);
}                                       //end of function_4

void print_series_2(int n)              //function_5 to print the series
{
	log("1");
	for(int i = 2; i < n + 1; i++)
	{	
		log(" + " << "1/" << i << "!");
	}
	log(" = ");
}                                       //end of function_5


void sum_series_3(int n)                  //function_6 to print the sum of the series
{
    int sum = 0;
    for(int i = 1; i < n + 1; i++)
    {
        if(i % 2 == 0)                  //if number is even then multiply it by -1
            sum += -1 * i;
        else
            sum += i;
    }
    print_series_3(n);                    //calling function_7
    log(sum);
}                                       //end of function_6

void print_series_3(int n)            //function_7 to print the series
{
    log("1");
	for(int i = 2; i < n + 1; i++)
    {
        if(i % 2 == 0)              
        {
            log("-" << i); 
        }
        else
        {
            log("+" << i);
        }    
    }
    log(" = ");
}                                   //end of function_7