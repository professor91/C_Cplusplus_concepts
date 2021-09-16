#include<iostream>

int fibonnaci(int n)
{
    if (n <= 1)
        return n;
    else
        return (fibonnaci(n-1) + fibonnaci(n-2));
}

int main()
{
    int n;

    again: std:: cout << "\nEnter the value of n: ";
    std:: cin >> n;
    
    if(n <= 0)
    {   
        std:: cout << "n should be a greater than 0.";
        goto again;
    }
    
    std:: cout << "Fibonnaci Series is: ";
    for(int i= 0; i< n; i++)
        std:: cout << fibonnaci(i) << " ";
    std:: cout << std:: endl;
return 0;
}
