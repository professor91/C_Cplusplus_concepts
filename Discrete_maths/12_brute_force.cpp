/* Eqn 
    x1 + x2 + x3 + .... + xn = C
    c >= 10
*/

#include<iostream>

#define log(x) std:: cout << x
#define read(x) std:: cin >> x

void show(int value[], int n)
{
	for(int i=0; i<n; i++)
	    log(" " << value[i] <<" ");
	log(std:: endl);
}

int combinations(int value[], int k, int n, int c)
{
	if(k == 0)
	{
		value[k]=c;
		show(value, n);
		return 0;
	}
	
    for(int i= 0; i <= c; i++)
	{
		value[k]=i;
		combinations(value, k-1, n, c-i);
	}
}
int main()
{
	int n, const_result;
	log("Enter value of n: ");
	read(n);
	int values[n];
	again: 
    log("Enter value of constant value C (positive and not more than 10): ");
	read(const_result);
	
    while(!(const_result >= 0 && const_result <= 10))
	{
		log("Error: C should be between 1 to 10!"<< std:: endl);
		goto again;
	}

	log("\nAll possible soln for C = " << const_result << " and n=  " << n << " are:\n");
	combinations(values, n-1, n, const_result);

return 0;
}