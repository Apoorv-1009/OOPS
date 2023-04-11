// Random testing operations with new operator
#include<bits/stdc++.h>
using namespace std;

int main()
{ 
    int n = 5;
    // int *ptr = new int(n);
    
    // *ptr = 3;

    // for(int i=0; i<n; i++)
    //     cout << ptr[i] << " ";

    // delete[] ptr;

    // cout << "\n";

    char *ptr = new char(n);
    strcpy(ptr, "bye");

    for(int i=0; i<n; i++)
        cout << ptr[i] << " ";

}