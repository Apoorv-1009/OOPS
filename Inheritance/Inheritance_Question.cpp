/*Create a base class called Shape. Use this class to store two double type values that
could be used to compute the area of figures. Derive two specific classes called triangle
and rectangle from the base Shape. Write a constructor to base class to initialize base
class members. Define a virtual member function called display_area (), to calculate and
display area of figures. Using these three classes, design a program that will accept 
dimensions of a triangle or rectangle interactively and display the area.*/

#include<bits/stdc++.h>
using namespace std;

class Shape
{
    public:
        double l, b;

        Shape(int i = 0, int j = 0) : l(i), b(j) {}

        virtual void display_area()=0;
};

class Rectangle: public Shape
{
    public:
        void display_area()
        {
            cout << "\n Enter length of rectangle: ";
            cin >> l;

            cout << "\n Enter breadth of rectangle: ";
            cin >> b;

            cout << "\n Area of Rectangle: " << l*b;
        }
};

class Triangle: public Shape
{
    public: 
        void display_area()
        {
            cout << "\n Enter height of triangle: ";
            cin >> l;

            cout << "\n Enter base of triangle: ";
            cin >> b;

            cout << "\n Area of Triangle: " << 0.5*l*b;
        }
};



int main()
{
    Rectangle r;
    Triangle t;

    r.display_area();
    t.display_area();
}