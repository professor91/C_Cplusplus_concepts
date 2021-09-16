/*
The C programming language offers a better way to utilize the memory space in form of bit fileds.
The data is stored only in the specified amount of memory (in terms of bits).
*/

#include<stdio.h>

struct {
    unsigned int var1 : 1;
} status1;

struct {
    unsigned int var1 : 3;
} status2;



int main(){

    printf("Size of status1: %ld\n", sizeof(status1));
    printf("Size of status2: %ld\n", sizeof(status2));

    status1.var1 = 1;
    printf("status1.var1= %d\n", status1.var1);

    status1.var1 = 2;
    printf("status1.var1= %d\n", status1.var1);

    status2.var1 = 5;
    printf("status2.var1= %d\n", status2.var1);

    status2.var1 = 8;
    printf("status2.var1= %d\n", status2.var1);

return 0;
}