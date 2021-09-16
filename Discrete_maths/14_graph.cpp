#include <iostream>

#define log(x) std:: cout << x
#define read(x) std:: cin >> x

int func1(int);         //prototype of function 1 to compute recursive relation T(n-1)+n
int func2(int);         //prototype of function 2 to compute recursive relation T(n-1)+n*2
int func3(int);         //prototype of function 3 to compute recursive relation 2*T(n/2)+n

// man function
int main()
{
    char ch = 'y';
    do{
        log("1. To calculate the recurssive relation T(n-1)+n");
        log("\n2. To calculate the recurssive relation T(n-1)+n*2");
        log("\n3. To calculate the recurssive relation 2*T(n/2)+n");
        
        int choice, n;
        
        log("\nEnter your choice: ");
        read(choice);
        log("\nEnter the value of n: ");
        read(n);

        if(choice == 1){
            log("\nOutput is given by: " << func1(n) << std:: endl);
        }
        else if(choice == 2){
            log("\nOutput is given by: "<< func2(n) << std:: endl);
        }
        else{
            log("\nOutput is given by: " << func3(n) << std:: endl);
        }
        log("\nDo you want to calculate another? (Y/y) ");
        read(ch);

    }while(ch == 'y' || ch== 'Y');

}

int func1(int n){
	if(n==0)
	    return 1;
	else
	{
        log("\n" << "T(" << n-1 << ")" << "+" << n << " = " << n << std:: endl);
        return func1(n-1)+n;
    }
}

int func2(int n){
	if(n==0)
	    return 1;
	else{
        log("\n" << "T(" << n-1 << ")" << "+" << n*2 << " = " << n*2 << std:: endl);
        return func2(n-1)+n*2;
    }
}

int func3(int n){
	if(n==1)
	    return 1;
	else
	{
        log("\n" << "2*T(" << n/2 << ")+" << n << " = " << 2*n << std:: endl);
        return 2*func3(n/2)+n;
    }
}