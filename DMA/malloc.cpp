// Program to test usage of malloc 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int *ptr;

    cout << "\n Enter number of elements: ";
    cin >> n;

    // Use malloc to allocate memory for n elements
    ptr = (int*)malloc(n*sizeof(int));

    cout << "\n Enter elements of the array: ";
    for(int i=0; i<n; i++)
        cin >> ptr[i];

    cout << "\n Entered array is: ";
    for(int i=0; i<n; i++)
        cout << ptr[i] << " ";

}