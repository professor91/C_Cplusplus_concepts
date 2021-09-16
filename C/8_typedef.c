/*
The C programming language provides a keyword called typedef, which you can use to give a type a new name.

*/

#include<stdio.h>

typedef int INTEGER;

typedef struct point{
    INTEGER x;
    INTEGER y;
} Point;

int main(){
    Point p;

    p.x= 10;
    p.y= 15;

    printf("x: %d\n", p.x);
    printf("y: %d\n", p.y);
    
return 0;
}