// C++ program to illustrate Array Name as Pointers in C++
#include <bits/stdc++.h>
using namespace std;

int main()
{
		//Declare an array
	int val[3] = { 5, 10, 20 };
	
	// Declare pointer variable
	int *ptr;
	
	// Assign the address of val[0] to ptr
	// We can use ptr = &val[0]; (both are same)
	ptr = val ;
	cout << "Elements of the array are: ";
	cout << ptr[0] << " " << ptr[1] << " " << ptr[2] << "\n";

	return 0;
}
