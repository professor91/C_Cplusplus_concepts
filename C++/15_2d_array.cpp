/* Store 1 in diagonals */

#include<iostream>

#define log(x) std:: cout << x
#define read(x) std:: cin >> x

void upperleft(int a[][3]);     //function_1
void upperright(int a[][3]);    //function_2
void lowerleft(int a[][3]);     //function_3
void lowerright(int a[][3]);    //function_4

int main()                      //main function
{
    int array[3][3];
    int choice;

    log("\n1. Upper left\t2. Upper right\n3. Lower left\t3. Lower right");
    log("\nEnter your choice: ");
    read(choice);                   //reading choice from the user

    switch(choice)
    {
        case 1  :   upperleft(array);
                    break;

        case 2  :   upperright(array);
                    break;

        case 3  :   lowerleft(array);
                    break;

        case 4  :   lowerright(array);
                    break;

        default :   log("\nWrong Choice!!!");
                    break;
    }

    return 0;
}

void upperleft(int a[][3])      //function_1
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(i == j)
                a[i][j] = 1;
            else
                a[i][j] = 0;
        }
    }

    for(int i = 0; i < 3; i++)
    {
        for(int  j = 0; j < 3; j++)
            log(a[i][j] << " ");
        log(std:: endl);
    }
}

void upperright(int a[][3])     //function_2
{
    int i = 0, j = 2;

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            a[i][j] = 0;

    while(i < 3)
    {
        a[i][j] = 1;
        j--;
        i++;
    }

    for(int i = 0; i < 3; i++)
    {
        for(int  j = 0; j < 3; j++)
            log(a[i][j] << " ");
        log(std:: endl);
    }
}

void lowerleft(int a[][3])      //function_3
{
    int i = 0, j = 2;

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            a[i][j] = 0;

    while(i < 3)
    {
        a[i][j] = 1;
        j--;
        i++;
    }

    for(int i = 0; i < 3; i++)
    {
        for(int  j = 0; j < 3; j++)
            log(a[i][j] << " ");
        log(std:: endl);
    }
}

void lowerright(int a[][3])     //function_4
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(i == j)
                a[i][j] = 1;
            else
                a[i][j] = 0;
        }
    }

    for(int i = 0; i < 3; i++)
    {
        for(int  j = 0; j < 3; j++)
            log(a[i][j] << " ");
        log(std:: endl);
    }
}

