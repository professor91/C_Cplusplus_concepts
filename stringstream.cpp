#include<iostream>
#include<sstream>
// #include<ios>

int main()
{
    int i_number;
    std:: cout << "Enter the integer: ";
    std:: cin >> i_number;

    std:: stringstream ss;
    ss << i_number;
    
    std:: string s_number;
    ss >> s_number;

    std:: cout << "\nInteger is: " << i_number;
    std:: cout << "\nString is: " << s_number + "2" << std:: endl;

    ss.clear();
    ss << s_number;
    int i_number2;
    ss >> i_number2;

    std:: cout << "\nInteger number is: " << i_number2 + 2<< std:: endl;

    ss.str(std:: string());

    ss << s_number << i_number2;
    std:: cout << "\nMixed string stream is: " << ss.str() << std:: endl;

    std:: cin.get();
    return 0;
}