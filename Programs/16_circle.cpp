/* Program to calculate the area and circumfrance of a circle using classes */

#include<iostream>

#define log(x) std:: cout << x
#define read(x) std:: cin >> x
#define pi 3.14

class circle                        
{
    private:
            float radius;
            float circum, area;
    
    public:
            circle(float x)             //constructor to initialize 'radius'
            {
                radius = x;
            }   

            float calc_area();          //prototype of function_1 to calculate area of the circle
            float calc_circum();        //prototype of function_2 to calculate circumfrance of the circle
};

float circle:: calc_area()              //function_1 to calculate area of the circle
{
    area = pi * radius * radius;
    return area;
}

float circle:: calc_circum()            //function_2 to calculate circumfrance of the circle
{
    circum = 2 * pi * radius;
    return circum;
}

int main()                              //main function
{
    float r, result;
    char choice, choice1;

    do
    {
    again:  log("Enter the radius of the circle: ");
            read(r);                                //reading the radius of the circle

            circle c(r);                            //declaring the object of the class and calling the constructor
            log("\n1. Area\t2. Circumfrance");
            log("\nEnter your choice: ");
            read(choice);

        switch (choice)
        {
            case '1':   result = c.calc_area();     //calling function_1
                        log("\nArea of the circle is : " << result);
                        break;

            case '2':   result = c.calc_circum();   //calling function_2
                        log("\nCircumfrance of the circle is:  " << result);
                        break;
            
            default :   log("\nWrong Choice!!!");
        }
        log("\nDo you wanna continue? ");
        read(choice1);
    }while(choice1 == 'y' || choice1 == 'Y');

return 0;
}                                           //end of main function