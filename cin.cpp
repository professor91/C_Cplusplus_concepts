#include<iostream>
#include<string>

int main()
{
	char c;
	std:: string s;

	std:: cout << "Enter: ";
	std:: cin >> c;
	
	getline(std:: cin, s);
	
	std:: cout << "Entered content is: " << c;
	std:: cout << std:: endl << s;
	std:: cin.get();
}
