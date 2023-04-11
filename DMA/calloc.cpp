#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int *ptr;

    cout << "\n Enter number of elements";
    cin >> n;

    // Use calloc to allocate space for n elements
    ptr = (int*)calloc(n, sizeof(int));

    

    cout << "\n Enter elements of the array: ";
    for(int i=0; i<n; i++)
        cin >> ptr[i];

    cout << "\n Entered elements are: ";
    for(int i=0; i<n; i++)
        cout << ptr[i] << " ";
        
}