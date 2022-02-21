/* Program to create a Class triangle with overloaded area functions and operators */

#include<iostream>
#include<cmath>

#define log(x) std:: cout << x
#define read(x) std:: cin >> x

class Triangle
{
    private:
            float area_val;

    public:
            float temp;
            void area(float, float);            //prototype of function_1 to compute area of right triangle
            void area(float, float, float);     //prototype of function_2 to compute area of triangle 
            float get_area();                   //prototype of function_3 to get access private data member 'area_val'
            bool operator ==(Triangle&);        //prototype of function_4 to check for equality
            void operator =(Triangle&);         //prototype of function_5 to assign value
};

void compute_area(Triangle&, float, float, float);  //prototype of function_6 to compute area of triangle

int main()
{
    Triangle t1,t2;
    float length_1, length_2, length_3;
    int choice;

    log("\nEnter the sides of the triangle (if triangle is right triangle then enter third side as 0): ");
    read(length_1 >> length_2 >> length_3);
   

    log("\n1. Find area of a Triangle\n2. Check if area of two triangles is same\n3.Assign value of area to a vaiable");
    log("\nEnter your choice: ");
    read(choice);

    if(choice != 1)
    {

    }

    switch(choice)
    {
        case 1  :   compute_area(t1, length_1, length_2, length_3);
                    break;

        case 2  :   log("\nEnter the sides of the triangle (if triangle is right triangle then enter third side as 0): ");
                    read(length_1 >> length_2 >> length_3);
                    compute_area(t1, length_1, length_2, length_3);
                    compute_area(t2, length_1, length_2, length_3);
                    if(t1.get_area() == t2.get_area())
                        log("\nAre of both triangle is same");
                    else
                        log("\nArea of both triangle is not same");
                    break;

        case 3  :   compute_area(t1, length_1, length_2, length_3);
                    t1.temp = t1.get_area();
                    log("\nValue of temporary variable is: " << t1.temp);
                    break;

        default :   log("\nWrong Choice!!!");
                    
    }
 
return 0;
}

void Triangle:: area(float l1, float l2)                    //function_1 to compute area of right triangle
{
    area_val = (1.0/2) * l1 * l2;
}

void Triangle:: area(float l1, float l2, float l3)          //function_2 to compute area of triangle 
{
    float s = (l1 + l2 + l3) / 2.0;
    area_val = sqrt(s * (s-l1) * (s-l2) * (s-l3));
}

float Triangle:: get_area()                                 //function_3 to get access private data member 'area_val'
{
    return area_val;
}

bool Triangle:: operator ==(Triangle& t)                    //function_4 to check for equality
{
    if(area_val == t.area_val)
        return true;
    return false;
}

void Triangle:: operator =(Triangle&)                       //function_5 to assign value
{
    
}

void compute_area(Triangle& t, float l1, float l2, float l3)    //function_6 to compute area of triangle
{
    if(l3 == 0)
        t.area(l1, l2);
    else
        t.area(l1, l2, l3);
    log("\nArea of triangle is: " << t.get_area());
}