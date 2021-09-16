#include<iostream>

using namespace std;

/* int func(int a, int b)				//nothing by reference
{
	a += 10;
	b += 10;						//both values are affected but it was not reflected in the main function
}

int& func(int a, int b) 			//only function by reference
{									
	a += 10;
	b += 10;						//both values are affected but it was not reflected in the main function
}*/

int& func(int& a, int& b)			//both function and parameters by reference
{
	a += 10;
	b += 10;						//both values are affected and it was reflected in the main function
}

/*int func(int& a, int& b )			//only parameters by reference
{
	a += 10;
	b += 10;						//both values are affected and it was reflected in the main function
}*/

int main()
{
	int a,b;
	
	cout<<"Enter the value of a & b: ";
	cin>>a>>b;
	
	func(a,b);
	
	cout<<"\nValue of a & b is: "<<a<<"  "<<b;
return 0;
}
