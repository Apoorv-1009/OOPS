#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i = 10;
    const int &r = i;   // r is another reference to i, its the exact same value and memory address
    int *p = &i;   // p is a pointer to i
    int *&q = p;   // q is a pointer reference to whatever p is pointing to its the exact same value and memory address

    cout << "\n i= " << i;   // i
    cout << "\n &i= " << &i;   // addr of i
    cout << "\n *&i= " << *&i;   // i, * operator pulls value pointed to by the address
    cout << "\n";
    cout << "\n r= " << r;   // r = i
    cout << "\n &r= " << &r;   // addr of r = addr of i
    cout << "\n";
    cout << "\n p= " << p;
    cout << "\n &p= " << &p;
    cout << "\n *&p= " << *&p;
    cout << "\n *p= " << *p;   // i, * operator pulls value pointed to by the address
    cout << "\n";
    cout << "\n q= " << q;
    cout << "\n &q= " << &q;
    cout << "\n *&q= " << *&q;

}