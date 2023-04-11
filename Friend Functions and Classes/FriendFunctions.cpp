#include<bits/stdc++.h>
using namespace std;

class A
{
    private:
        int a=10;
    public:
        friend void print_value(A a, int x);
};

void print_value(A t, int b)
{
    cout << t.a;
    cout << b;
}

int main()
{
    A a1;
    print_value(a1, 100);
    return 0;
}