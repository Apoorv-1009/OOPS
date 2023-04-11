#include<bits/stdc++.h>
using namespace std;

int main()
{ 
    int n;

    cout << "\n Enter number of elements: ";
    cin >> n;

    int *ptr = new int(n);
    
    cout << "\n Enter elements: ";
    for(int i=0; i<n; i++)
        cin >> ptr[i];

    cout <<"\n Entered array is:";
    for(int i=0; i<n; i++)
        cout << ptr[i] << " ";

}