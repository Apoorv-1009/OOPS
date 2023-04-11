// Program to use malloc to input a structure data type
#include<bits/stdc++.h>
using namespace std;

struct complexx
{
    int real, imaginary;
};

int main()
{
    complexx *a;

    a = (complexx*)malloc(sizeof(complexx));

    cout << "\n Enter real part of the number: ";
    cin >> (*a).real;

    cout << "\n Enter imaginary part of the number: ";
    cin >> a->imaginary;

    cout << " Entered number is: " << a->real << " + i*" << a->imaginary;

}