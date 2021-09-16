#include<iostream>

int main()
{
	int age;
	
	std::cout<<"Enter the age of the employee: ";
	std::cin>>age;
	
	try
	{
		if(age<18)
			throw age;
		std::cout<<"\nEmployee is eligible!";
	}
	
	catch(int x)
	{
		std::cout<<"\nEmployee is not eligible!";
	}
}
