// Program to conduct complex element operations
#include<bits/stdc++.h>
using namespace std;

struct complexx
{
    int real, img;
};

complexx add(complexx a, complexx b)
{
    complexx res;
    res.real = a.real + b.real;
    res.img = a.img + b.img;

    return res;
}

complexx sub(complexx a, complexx b)
{
    complexx res;
    res.real = a.real - b.real;
    res.img = a.img - b.img;

    return res;
}

complexx mul(complexx a, complexx b)
{
    complexx res;
    res.real = a.real*b.real - a.img*b.img;
    res.img = a.real*b.img + a.img*b.real;

    return res;
}

float mod(complexx a)
{
    float res = sqrt(pow(a.img, 2) + pow(a.real, 2));
    return res;
}

void disp(complexx a)
{
    cout << a.real << " + i*" << a.img << "\n";
}

int main()
{
    complexx a, b;
    complexx x, y, z;
    float w;
    
    a.real = 3;
    a.img = 4;

    b.real = 5;
    b.img = 6;

    x = add(a, b);
    y = sub(a, b);
    z = mul(a, b);
    w = mod(a);

    cout << "Mod of a = " << w << "\n";
    disp(x);
    disp(y);
    disp(z);


}