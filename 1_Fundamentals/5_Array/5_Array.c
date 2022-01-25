#include<stdio.h>

// returning array from functions
int* func(int a[]){
    a[0]= 6;
    a[1]= 7;
    a[2]= 8;
    a[3]= 9;
    a[4]= 10;

return a;
}

int main(){
    int x[5]= {1,2,3,4,5};
    int *p;

    p = func(x);

    for(int i=0; i<5; i++, p++){
        printf("%d ", *p);
    }
    
    printf("\n");
return 0;
}