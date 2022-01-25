/*
Data Types
type                            size                                range

signed char (char)              1 byte	                            -128 to 127
unsigned char	                1 byte	                             0 to 255

signed int (int)                4 bytes	                            -2,147,483,648 to 2,147,483,647
unsigned int	                4 bytes	                             0 to 4,294,967,295

signed short int (short int)    2 bytes 	                        -32,768 to 32,767
unsigned short int	            2 bytes	                             0 to 65,535

signed long int (long int)      8 bytes or (4bytes for 32 bit OS)	-92,23,37,20,36,85,47,75,808 to 92,23,37,20,36,85,47,75,807
unsigned long	                8 bytes	                             0 to 18446744073709551615

float	                        4 byte	                             1.2E-38 to 3.4E+38	    6 decimal places
double	                        8 byte	                             2.3E-308 to 1.7E+308	15 decimal places
long double	                    10 byte	                             3.4E-4932 to 1.1E+4932	19 decimal places

bool
union

void
*/

#include<stdio.h>

int main(){
    int x = 2;

    printf("int x= %d", x);
    printf("\nfloat x= %f", (float)x);

return 0;
}