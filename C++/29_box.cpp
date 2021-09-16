/* Program to exectute member funtions of class Box */

#include<iostream>
#include"28_box.h"

#define log(x) std:: cout << x
#define read(x) std:: cin >> x

int main()
{
    float l,b,h;

    log("\nEnter the length of the box: ");
    read(l);
    log("\nEnter the breadth of the box: ");
    read(b);
    log("\nEnter the height of the box: ");
    read(h);

    Box b1(l,b,h);

    log("\nSurface are of the box is: " << b1.surface_area());
    log("\nVolume of the box is: " << b1.volume());
    log("\nValue of length before increment: " << l++ << "\nAnd after increment: " << l);
    log("\nValue of breadth before decrement: " << b-- << "\nAnd after decrement: " << b);

    log("\n\nEnter the length of the box 2: ");
    read(l);
    log("\nEnter the breadth of the box 2: ");
    read(b);
    log("\nEnter the height of the box 2: ");
    read(h);

    Box b2(l,b,h);

    if(b1 == b2)
        log("\nBoxes area is equal.");
    else
        log("\nBoxes area is not equal.");
    
return 0;
}
