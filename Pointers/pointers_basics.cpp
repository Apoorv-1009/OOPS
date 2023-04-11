// Program to review pointers basics
#include <iostream>
using namespace std;
  
int main()
{
    int val = 10;
    int *ptr = &val;

    cout << " val = " << val << "\n";
    cout << " ptr = " << ptr << "\n";
    cout << " *ptr = " << *ptr << "\n\n";

    cout << " Square value of val and display \n\n";
    *ptr *= *ptr;

    cout << " val = " << val << "\n";
    cout << " ptr = " << ptr << "\n";
    cout << " *ptr = " << *ptr << "\n";
    
    return 0;
}
/*  NOTES
val stores the value assigned
&val stores the value of the address of val
ptr stores the value of &val and thus points to it
*ptr is used to access the data stored at the memory location held in ptr
with each rerun, address of val changes
*/