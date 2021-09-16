/* Program to perform opertions on complex numbers */

#include<iostream>
#include<string>

#define log(x) std:: cout << x
#define read(x) std:: cin >> x

class complex                       //class 'complex'
{
    private:
            int real;
            int imagionary;
    
    public:
            complex(int r, int i)   //constructor to initialize complex number
            {
                real = r;
                imagionary = i;
            }
            
            std::string add(const complex&, char);          //prototype of function_1 to add the complex numbers
            std::string subtract(const complex&, char);     //prototype of function_2 to subtract the complex numbers
            std::string multiply(const complex&, char);     //prototype of function_3 to multiply the complex numbers
            std::string divide(complex&, char);             //prototype of function_4 to divide the complex numbers
            void display();                                 //prototype of function_5 to display the complec numbers
};

int main()                          //main function
{
    int rl, img;
    int choice;
    std:: string result;

    log("Enter the real value: ");              
    read(rl);                                   
    log("\nEnter the imagionary value: ");
    read(img);

    complex c1(rl, img);                        //1st complex number

    log("\n1. Add\t2. Subtract\t3. Multiply\t4. Divide");
    log("\nEnter your choice: ");
    read(choice);                               //reading choice from the user

    log("Enter the real value: ");
    read(rl);
    log("\nEnter the imagionary value: ");
    read(img);

    complex c2(rl, img);                        //2nd complex number

    switch(choice)
    {
        case 1  :   result = c1.add(c2, 'r');                       //calling function_1 for real part
                    result += c1.add(c2, 'i');                      //calling function_1 for imagionary part
                    log("Sum is: " << result);  
                    break;

        case 2  :   result = c1.subtract(c2, 'r');                  //calling function_1 for real part
                    result += c1.subtract(c2, 'i');                 //calling function_1 for imagionary part
                    log("Difference is: " << result);
                    break;

        case 3  :   result = c1.multiply(c2, 'r');                  //calling function_1 for real part
                    result += c1.multiply(c2, 'i');                 //calling function_1 for imagionary part
                    log("Product is: " << result);
                    break;

        case 4  :   result = c1.divide(c2, 'r');                    //calling function_1 for real part
                    result += c1.divide(c2, 'i');                   //calling function_1 for imagionary part
                    log("\nResult after dividing is: " << result);
                    break;

        default :   log("\nWrong Choice!!!");
    }
return 0;
}

std::string complex:: add(const complex& c, char type)              //function_1 to add the complex numbers
{
    std:: string sum;

    if(type == 'r')
    {
        sum = std:: to_string(real + c.real);                       //to_string used to conver int to string
        return sum;
    }
    else
    {
        sum = std:: to_string(imagionary + c.imagionary);
        if(imagionary + c.imagionary > 0)
            return ("+" + sum + "i");
    }

return (sum + "i");
}

std::string complex:: subtract(const complex& c, char type)         //function_2 to subtract the complex numbers
{
    std:: string diff;
   
    if(type == 'r')
    {
        diff = std:: to_string(real - c.real);
        return diff;
    }

    else
    {
        diff = std:: to_string(imagionary - c.imagionary);
        if(imagionary - c.imagionary > 0)
            return ("+" + diff + "i");
    }
return (diff + "i");
}

std::string complex:: multiply(const complex& c, char type)         //function_3 to multiply the complex numbers
{
    std:: string prod;

    if(type == 'r')
    {
        prod = std:: to_string( (real * c.real) - (imagionary * c.imagionary) );
        return prod;
    }
    
    else
    {
        prod = std:: to_string( (real * c.imagionary) + (imagionary * c.real) );
        if( (real * c.imagionary) + (imagionary * c.real) > 0)
            return ("+" + prod + "i");
    }

return (prod + "i");
}

std::string complex:: divide(complex& c, char type)                 //function_4 to divide the complex numbers
{
    std:: string numerator, denominator;
    complex c2(c.real, (-1) * c.imagionary);

    denominator = c.multiply(c2, 'r');
    
    if(type == 'r')
    {    
        numerator = multiply(c2, 'r'); 
        return (numerator + "/" + denominator);
    }

    else
    {
        numerator = multiply(c2, 'i');
        return (numerator + "/" + denominator);
    }
}

void complex:: display()                                            //function_5 to display the complec numbers
{
    log("\nComplex number is: " << real << " " << imagionary << "i");
}