#include <bits/stdc++.h>
using namespace std;
class classes
{
	// Access specifier
	public:

        // Data Members
        string name;
        int a;

        classes(int i=1)
        {
            a = i;
        }

        // Member Functions()
        void printname()
        {
            cout << " Name is: " << name << "\n";
        }

        void printval()
        {
            cout << " a is " << a << "\n";
        }
};

int main() 
{

	// Declare an object of class geeks
	classes obj1;
	// Assign value to name
    obj1.a = 6;
	obj1.name = "Abhi";
    
	// Call member function
	obj1.printname();
    obj1.printval();

	return 0;
}
