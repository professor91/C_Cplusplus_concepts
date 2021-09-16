#include <iostream>
#include <math.h>

#define log(x) std:: cout << x
#define read(x) std:: cin >> x
#define logn std:: cout << std:: endl

int compute(int[], int, int);

int main(){

    int degree= 0, x;
    char ch = 'y';
    
    while(ch == 'y'){
        log("Enter the degree of the polynomial: ");
        read(degree); logn;
        
        int coeffs[degree];

        for(int i= degree; i>= 0; i--){
            log("Enter the coefficient of degree " << i << ": ");
            read(coeffs[i]);
        }
        
        logn;
        log("Polynomial: ");
        for(int i= degree; i>= 0; i--){
            
            if(coeffs[i] != 0){
                log("(" << coeffs[i] << "x^" << i << ")");
                
                if(i==0){
                    continue;
                }
                log(" + ");
            }
            else{
                continue;
            }
        }

        log("\nEnter the value of x : ");
        read(x);

        log("\nValue of the polynomial is: " << compute(coeffs, degree, x));
        log("\n\nDo you wanna compute another polynomial? (y/n): ");
        read(ch);
    }

}

// function 1 to compute the value of polynomial
int compute(int coeffs[], int deg, int x){
    int sum= 0;
    for(int i= deg; i>= 0; i--){
        sum += (coeffs[i] * pow(x,i));
    }
    
return sum;
}