/* Program containing declaration of geometric class */

#include<iostream>
#include<cmath>

#define log(x) std:: cout << x
#define read(x) std:: cin >> x

class shapes                            //base class "shapes"
{
    protected:
            static float PI;            //static variable tp store value of "pi"
    public:
            virtual void area();        //function to calculate area
            virtual void print();       //function to print area
};

float shapes::PI = 3.14;                //assigning the value of "PI"

class TwoDim: public shapes             //class for two dimentional derived from base class "shapes"
{
    protected:
            float area_val = 0;         //value to store the value of calculated area
    public:
            float get_area_val()
            {
                return area_val;
            }
};

class ThreeDim: public shapes           //class for two dimentional derived from base class "shapes"
{
    protected:
            float area_val = 0;         //value to store the value of calculated area
    public:
            float get_area_val()        //function to return the value of the area
            {
                return area_val;
            }
};

class triangle: public TwoDim           //class for triangle derived from class "TwoDim"
{
    public:
            void area(float b, float h)             //function to calculate the area of the shape
            {
                area_val = (b * h) / 2;
            }
            void area(float a, float b, float c)    //function to calculate area
            {
                int s = (a + b + c) / 2;
                area_val = sqrt(s * (s-a) * (s-b) * (s-c));
            }
            void print()                            //function to print the area of the shape
            {
                log("\nArea of triangle is: " << area_val);
            }
};

class rectangle: public TwoDim          //class for rectangle derived from class "TwoDim"
{
    public:
            void area(int b, int h)     //function to calculate area
            {
                area_val = (b * h) / 2;
            }
            void print()                //function to print the area of the shape
            {
                log("\nArea of rectangle is: " << area_val);
            }    
};

class circle: public TwoDim             //class for circle derived from class "TwoDim"
{
    public:
            void area(int r)            //function to calculate area
            {
                area_val = PI * r * r;
            }
            void print()                //function to print the area of the shape
            {
                log("\nArea of circle is: " << area_val);
            }
};

class cone: public ThreeDim             //class for cone derived from class "ThreeDim"
{
    public:
            void area(int b, int h)     //function to calculate area
            {
                area_val = (b * h) / 2;
            }
            void print()                //function to print the area of the shape
            {
                log("\nSurface Area of cone is: " << area_val);
            }
};

class cube: public ThreeDim             //class for cube derived from class "ThreeDim"
{
    public:
            void area(int s)            //function to calculate area
            {
                area_val = s * s * s;
            }
            void print()                //function to print the area of the shape
            {
                log("\nSurface Area of cube is: " << area_val);
            }
};

class sphere: public ThreeDim           //class for sphere derived from class "ThreeDim"
{
    public:
            void area(int r)            //function to calculate area
            {
                area_val = 4 * PI * r * r;
            }
            void print()                //function to print the area of the shape
            {
                log("\n Surface Area of shpere is: " << area_val);
            }
};