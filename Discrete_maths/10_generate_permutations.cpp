#include<iostream>
#include<string>

void swap(char &x,char &y)
{
    char temp= x;
    x= y;
    y= temp;
}

void permutation(char num[],int l,int r)
{
    if(l==r)
        std:: cout << num << " " ;

    else
    {
        for(int i= l; i<= r; i++)
        {
            swap(num[l],num[i]);
            permutation(num,l+1,r);
            swap(num[l],num[i]);
        }
    }
}

int main()  
{
    char num[20];
    int i, n;

    std:: cout << "\nEnter the number of digits whose permutations you want to find (less than 20): ";
    std:: cin >> n;
    while(n> 20)
    {
        std:: cout << "\nEnter right number bruhh: ";
        std:: cin>> n;
    }
    
    std:: cout << "\nEnter digits: ";
    for(i= 0; i< n; i++)
    {
        std:: cin >> num[i];
        while(!isdigit(num[i]))
        {
            std:: cout << "\nEnter a digit bruhh: ";
            std:: cin >> num[i];
        }
    }

    num[i]='\0';

    std:: cout << "\nEntered set of digits is : ";
    for(i= 0; i< n; i++)
        std:: cout << num[i]<<", ";

    std:: cout << "\nAll permutations of without repetation {";
    for(i= 0 ; i< n; i++)
        std:: cout << num[i] << " , ";
    std:: cout << "\b\b} are: ";
    permutation(num,0,n-1);

    return 0;
}