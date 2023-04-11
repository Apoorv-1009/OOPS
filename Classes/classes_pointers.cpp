#include<bits/stdc++.h>
using namespace std;

class example
{
    public:
        int a;

        example()
        {
            a = 7;
        }

        example *address(void)
        {
            return this;
        }
};

int main()
{
    int n = 5;
    example *ptr[n];
    example x;
    example *k = x.address();
    cout << k << endl;
    cout << x.a << endl;
    ptr[0] = &x;

    ptr[0]->a = 5;
    cout << ptr[0]->a;
    
}