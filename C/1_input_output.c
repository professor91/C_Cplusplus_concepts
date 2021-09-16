/*
In printf func:-
                %d - an int type argument
                %f - a double type argument
                %c - a single character
                %s - a string
                %n - prints nothing
                
                %hi - short (signed)
                %hu - short (unsigned)
                %Lf - long double
                
                
                %d - a decimal integer (assumes base 10)
                %i - a decimal integer (detects the base automatically)

                %o - an octal (base 8) integer
                %x - a hexadecimal (base 16) integer

                %p - an address (or pointer)
                
                %f - a floating point number for floats
                %u - an int unsigned decimal

                %e - a floating point number in scientific notation
                %E - a floating point number in scientific notation
                
                %% - the % symbol
*/

#include<stdio.h>

// main function
int main(){

    printf("Hello World");
    printf("\nValue= %d", 10);

// getchar() & putchar()    - for single character
    int a;

    printf("\nEnter value of a: ");
    a= getchar();

    printf("\nValue of a is: ");
    putchar(a);

// gets() & puts()          - for a line
    char str[100];

    printf("Enter value of str: ");
    gets(str);

    printf("\nValue of str is: ");
    puts(str);

// scanf() & printf()
    
return 0;
}

