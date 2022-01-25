#include<iostream>

using namespace std;

int fact(int n)
{
    cout << " in ";
    if( n == 0)
    {
        return 1; 
    }
    
    else
    {
        return n * fact(n-1);
    }
    cout << "here";
}

int main()
{
    int x;

    cin >> x;

    cout << "Factorial is: " << fact(x);
    
return 0;
}