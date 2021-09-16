#include<iostream>
#include<math.h>

#define log(x) std:: cout << x
#define read(x) std:: cin >> x

class Set                       //class 'set'
{
    private:
            int size;                           //integer variable storing the size/cardinality of the set
            int* set;
    
    public:
            Set()
            {
                size= 0;
                set= new int[size];
            }

            void set_size();                    //prototype of function_1 to initialize the size of the set
            void get_elements();                //prototype of function_2 to get the elememts of the set
            void unique();                      //prototype of function_3 to remove duplicate elements from the set
            void showset();                     //prototype of function_4 to print the elements of the set
            int cardinality();                  //prototype of function_5 to return the cardinality of the set
            bool is_member(int);                //prototype of function_6 to check if the passes element is present in the set
            void power_set();                   //prototypr of function_7 to print the power set of the set

};                                  //end of class 'set'

void Set::set_size()                //function_1 to initialize the size of the set
{   
    again: read(size);
    if(size== 0)
        goto again;
    else
        set = new int[size];
}

void Set::get_elements()            //function_2 to get the elememts of the set
{
    for(int i= 0; i< size; i++)
        read(set[i]);
}

void Set::unique()                  //function_3 to remove duplicate elements from the set
{
    for(int i= 0; i< size; i++)
    {
        for(int j= i+1; j< size; j++)
        {
            if(set[i] == set[j])            //duplicate found
            {
                for(int k= 0; k< size-1; k++)   //removal initiated
                    set[k]= set[k+1];
                --size;
            }
        }
    }
}

void Set::showset()                    //function_4 to print the elements of the set
{
    unique();
    for(int i= 0; i< size; i++)
    {
        if(i== 0)
            log(set[i]);
        else     
            log("," << set[i]);
    }
}

int Set::cardinality()              //function_4 to print the elements of the set
{
    unique();                       //calling function_3
    
return size;
}

bool Set::is_member(int elem)       //function_6 to check if the passes element is present in the set
{
    for(int i= 0; i< size; i++)
    {
        if(set[i] == elem)        //duplicate found...returning to main
            return true;
    }
return false;
}

void Set::power_set()               //function_7 to print the power set of the set
{
    int psize = pow(2, cardinality());

    log("{");
    for(int i= 0; i< psize; i++)
    {
        log("{");
        
        for(int j= 0; j< size; j++){
        
            if(i & (1 << j)){
                log(set[j] << ",");
            }
        }
        log("\b" << "}, ");
    }
    log("}");
}

int main()                          //main function
{   
    Set A;
    
    log("Enter the size of the array: ");
    A.set_size();                   //reading size of the set

    log("\nEnter the elements of the arrray: ");
    A.get_elements();               //reading elements of the set
    log("\nSet is: {");
    A.showset();
    log("}");

    int choice;
    char ch= 'y';
    
    do
    {
    log("\n1. Show Cardinality of set\n2. Check if an element is present in the set\n3. Print power set of the set");
    log("\nEnter you choice: ");
    read(choice);                   //reading choice from the user

    switch ((choice))
    {
        case 1  :   log("\nCardinality of the setn is: " << A.cardinality());   //calling function_5
                    break;

        case 2  :   log("\nEnter the element: ");
                    read(choice);

                    if(A.is_member(choice))             //calling function_6
                        log("\nElement is present.");
                    else
                        log("\nElement is not present");
                    break;

        case 3  :   log("\nPower set is: { ");
                    A.power_set();                      //calling function_7
                    log(" }");
                    break;
        
        default :   log("\nWrong Choice!!!");
    }
    log("\nChoose again? ");
    read(ch);
    }while (ch== 'y' || ch == 'Y');   

return 0;
}                                       //end of main function
