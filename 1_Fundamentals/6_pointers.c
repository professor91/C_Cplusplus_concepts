#include<stdio.h>

int main(){
    int x = 10;
    int* p;

    p= &x;

    printf("Address of x is= %p\n", p);
    printf("Value of x is= %d", *p);

    printf("\n");
return 0;
}