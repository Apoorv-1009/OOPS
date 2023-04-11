#include<bits/stdc++.h>
using namespace std;

class A
{
    private: 
        int a=1;

    public:
        void set_value_a(int x)
        {
            a = x;
        }

        friend class B;
};

class B
{
    private: 
        int b=2;

    public:
        void set_value_b(int x)
        {
            b = x;
        }

        void display(B c1, A c2)
        {
            cout << "\n " << c1.b;
            cout << "\n " << c2.a;
        }
};

int main()
{
    A a;
    B b;
    b.display(b, a);
}