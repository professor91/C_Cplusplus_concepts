#include<iostream>

int permutation(int n, int r)
{
	if(r <= 0)
		return 1;
	else	
		return n*permutation(n-1,r-1); 
}

int combination(int n,int r)
{
    if(n==0 || r==0 || n==r)
		return 1;	
	else
		return combination(n-1,r-1) + combination(n-1,r);
}

int main()
{
    int n, r, p, c;
    
    again:
    std:: cout << "\nEnter the value of n: ";
    std:: cin >> n;
    std:: cout << "\nEnter the value for r (less than or equal to n): ";
    std:: cin >> r;
    
    if(r>n)
    {
        std:: cout << "\nr should be less than or equal to n";
        goto again;
    }
    
    p= permutation(n,r);
    c= combination(n,r);

    std:: cout << "\nP(" << n << "," << r << ") is " << p;
    std:: cout << "\nC(" << n << "," << r << ") is " << c;

    std:: cout << std:: endl;

return 0;
}
