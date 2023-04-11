#include<bits/stdc++.h>
using namespace std;

class Complex
{
    private:
        int real, img;
    
    public:

        Complex(int r=0, int i=0)
        {
            real = r;
            img = i;
        }

        // The const in the syntax isnt complusory
        Complex operator + (Complex const &obj)
        {
            Complex c;
            c.real = real + obj.real;
            c.img = img + obj.img;
            return c;
        }

        void display()
        {
            cout << "\n r: " << real;
            cout << "\n i: " << img;
        }
};

int main()
{
    Complex a(2, 3), b(3, 5), d;
    Complex c = a + b + 5;
    c.display();
}