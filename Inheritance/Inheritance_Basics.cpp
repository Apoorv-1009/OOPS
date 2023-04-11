#include <bits/stdc++.h>
using namespace std;

class A
{
    // private:
    public: 
        int A = 1;
        void print_A()
        {
            cout << "\n Priting A = " << A;
        }
};

class B: private A
{
    private:
        int B = 2;
    public:
        void print_B()
        {
            cout << "\n Priting B = " << B;
        }

    protected:
        int B_protected = 10;
};

int main()
{
    A a;
    B b;
    b.print_B();
    // b.print_A();   // Unaccessible if A is inherited as private
    // b.print_A();   // Unaccessible if A is inherited as private
    a.print_A();
}