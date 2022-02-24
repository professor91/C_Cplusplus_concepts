/*  Write a simple code to print "Namaste World" 5 times.
 *
 *  This task can be done in two ways,
 *  
 *  - Using for loop
 *  - Using cout statement
 *  
 *  Time complexity of for loop is high since it is performing three tasks - checking condition (i<5), incrementing i, printing on screen
 *  Time complexity of the simple cout is one-third times the loop's since it is performing only one of it's tasks - printing on screen
 * 
 */ 


#include<iostream>

void one () {
    for (int i= 0; i< 5; i++) {
        std:: cout << "Namaste World" << std:: endl;
    }
}

void two () {
    std:: cout << "Namaste World" << std:: endl;
    std:: cout << "Namaste World" << std:: endl;
    std:: cout << "Namaste World" << std:: endl;
    std:: cout << "Namaste World" << std:: endl;
    std:: cout << "Namaste World" << std:: endl;
}

int main () {

    std:: cout << "Method 1" << std:: endl;
    one();

    std:: cout << "\nMethod 2" << std:: endl;
    two();

return 0;
}