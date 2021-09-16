/*
A union is a special data type available in C that allows to store different data types in the same memory location. 
You can define a union with many members, but only one member can contain a value at any given time. Unions provide 
an efficient way of using the same memory location for multiple-purpose.
*/

#include<stdio.h>

union Data
{
    int i;
    float f;
    char c[20];
};


int main(){
    union Data data;

    printf("Memory occupied by data union is: %li\n", sizeof(data));
return 0;
}