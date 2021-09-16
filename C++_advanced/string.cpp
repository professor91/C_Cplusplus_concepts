#include<iostream>
#include<string>


int function_1(int a)
{
	std:: cout << "Value of a is: " << a << std:: endl;
}

void function_2 (int a)
{
	std:: cout << "Value of a is void: " << a << std:: endl;
}

int main()
{
	int a;
	
	std:: cout << "Enter the integer: ";
	std:: cin >> a;
	
	std:: cout << function_1(a);
//	std:: cout << function_2(a);
	
	std:: cin.get();
}
