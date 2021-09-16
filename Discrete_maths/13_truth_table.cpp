#include<iostream>

#define log(x) std:: cout << x
#define read(x) std:: cin >> x

//AND - if both are true then only true
void conjunction(char x,char y)
{
    log("\nTruth table of conjuction is:\n");
    log("x" << "\t\t" << "y" << "\t\t\t" << "Conjuction\n");

        if(x== 'T' && y== 'T')
            log(x  << "\t\t" << y << "\t\t\t" << "T");
        else
            log(x << "\t\t" << y << "\t\t\t" << 'F');
}

//OR - if either one is true then true
void disjunction(char x,char y)
{
    log("\nTruth Table of disjunction of x and y is :\n");
    log("x" << "\t\t" << "y" << "\t\t\t" << "Dijunction\n");
    
        if(x== 'T' || y== 'T')
            log(x << "\t\t" << y << "\t\t\t" << 'T');
        else
            log(x << "\t\t" << y << "\t\t\t" << 'F');
    
}

//NAND - Negative of AND
void nand(char x,char y)
{
    log("\nTruth Table of NAND of x and y is :\n");  
    log("x" << "\t\t" << "y" << "\t\t\t" << "NAND\n");

        if(x== 'T' && y== 'T')
            log(x << "\t\t" << y << "\t\t\t" << 'F');
        else
            log(x << "\t\t" << y << "\t\t\t" << 'T');   
}

//NOR - Negative of OR
void nor(char x,char y)
{
    log("\n\n Truth Table of NOR of x and y is :\n");
    log("x" << "\t\t" << "y" << "\t\t\t" << "NOR\n");

        if(x=='F' && y== 'F')
            log(x << "\t\t" << y << "\t\t\t" << 'T');
        else
            log(x << "\t\t" << y << "\t\t\t" << 'F');
}

//XOR - if inputs are different then only true
void Xor(char x,char y)
{
    log("\nTruth Table of Exclusive OR of x and y is :\n");
    log("x" << "\t\t" << "y" << "\t\t\t" << "XOR\n");

        if(x != y)
            log(x << "\t\t" << y << "\t\t\t" << 'T');
        else
            log(x << "\t\t" << y << "\t\t\t" << 'F');
}

//XNOR - Negative or NOR
void xnor(char x,char y)
{
    log("\n\n Truth Table of Exclusive NOR of x and y is :\n");
    log("x" << "\t\t" << "y" << "\t\t\t" << "XNOR\n");
 
        if(x == y)
            log(x << "\t\t" << y << "\t\t\t" << 'T');
        else
            log(x << "\t\t" << y << "\t\t\t" << 'F');

}

//Negation
void negation(char x,char y)
{
    log("\n\n Truth Table of Negation of x and Negation of y is :\n");
    log("x" << "\t\t" << "y" << "\t\t\t" << "Negation\n");

        if(x== 'F' && y== 'F')
            log(x << "\t\t" << y << "\t\t\t" << 'T' << "\t\t" << 'T');

        else if(x== 'F' && y== 'T')
            log(x << "\t\t" << y << "\t\t\t" << 'T' << "\t\t" << 'F');

        else if(x== 'T' && y== 'F')
            log(x << "\t\t" << y << "\t\t\t" << 'F' << "\t\t" << 'T');

        else if(x== 'T' && y== 'T')
            log(x << "\t\t" << y << "\t\t\t" << 'F' << "\t\t" << 'F');
}

//Conditional - if inputs are different then false
void conditional(char x,char y)
{
    log("\n\n Truth Table of Conditional of x and y is :\n");
    log("x" << "\t\t" << "y" << "\t\t\t" << "Conditional\n");
    
        if(x== 'T' && y == 'F')
            log(x << "\t\t" << y << "\t\t\t" << 'F');
        else
            log(x << "\t\t" << y << "\t\t\t" << 'T');
    
}

//Biconditional - if both inputs true then only true
void biconditional(char x,char y)
{
    log("\n\n Truth Table of Bi-conditional of x and y is :\n");
    log("x" << "\t\t" << "y" << "\t\t\t" << "Biconditional\n");

        if(x != y)
            log(x << "\t\t" << y << "\t\t\t" << 'F');
        else
            log(x << "\t\t" << y << "\t\t\t" << 'T');
}

int main()
{
    char x, y, ch;
    int choice;
    
    log("\nEnter the value of x and y (either T or F): ");
    read(x >> y);

    log("Want to print truth table of ?");
    log("\n\n1. Conjunction\t\t6. Exclusive NOR\n2. Disjunction\t\t7. Negation\n3. Exclusive OR\t\t8. NAND\n4. Conditional\t\t9. NOR\n5. Bi-conditional\t10. Exit");
    log("\n\nEnter you choice: ");
    read(choice);

    
    switch(choice)
    {
        case 1  :   conjunction(x,y);
                    break;
        
        case 2  :   disjunction(x,y);
                    break;
        
        case 3  :   Xor(x,y);
                    break;
        
        case 4  :   conditional(x,y);
                    break;
        
        case 5  :   biconditional(x,y);
                    break;
        
        case 6  :   xnor(x,y);
                    break;
        
        case 7  :   negation(x,y);
                    break;
        
        case 8  :   nand(x,y);
                    break;
        
        case 9  :   nor(x,y);
                    break;
        
        default :   log("Wrong Choice!!");

    }

    std:: cout << std:: endl;

return 0;
}