/*Header file contain class Box*/

#include<iostream>

class Box
{
    private:
            float length = 0, breadth = 0, height = 0;
    public:
            Box(float l, float b, float h)
            {
                length = l;
                breadth = b;
                height = h;
            }

            float surface_area();
            float volume();
            void operator ++(int x)
            {
                x += 1;
            }
            void operator --(int x)
            {
                x -= 1;
            }
            bool operator ==(Box& b)
            {
                if(length == b.length && breadth == b.breadth && height == b.height)
                    return true;
                else
                    return false;
            }
};

float Box:: surface_area()
{
    return (2 * ((length * breadth) + (breadth * height) + (length * height)));
}

float Box:: volume()
{
    return (length * breadth * height);
}