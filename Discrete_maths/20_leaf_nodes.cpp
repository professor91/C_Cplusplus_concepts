#include<iostream>

#define log(x) std:: cout << x
#define read(x) std:: cin >> x

// prototype of function 1 to compute total number of leaf nodes
int compute(int, int);

int main(){
    
    int m, i;
    log("\nEnter the number of internal nodes: ");
    read(i);
    log("Enter the value of m: ");
    read(m);

    log("\nNumber of leaves are: " << compute(m, i) << std:: endl);

return 0;
}

// function 1 to compute total number of leaf nodes
int compute(int m, int i){
    return (m-1)*i + 1;
}
