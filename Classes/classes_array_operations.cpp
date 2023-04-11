#include <bits/stdc++.h>
using namespace std;

class array_ops
{
    public:
        int arr[10], len;

        void arr_init()
        {
            cout << " Enter length of array, max 10: ";
            cin >> len;

            cout << "\n Enter values of array: " << "\n";

            for(int i=0; i<len; i++)
                cin >> arr[i];
        }

        void arr_disp()
        {
            cout << " Values in array: ";

            for(int i=0; i<len; i++)
                cout << arr[i] << " ";

            cout << "\n";
        }

        void arr_push()
        {
            len++;
            cout << " Enter element to push: ";
            cin >> arr[len-1];

            arr_disp();
        }

        void arr_pop()
        {
            len--;

            arr_disp();
        }

        void arr_remove()
        {
            int index;
            cout << "\n Enter index of element to remove: ";
            cin >> index;

            for(int i=index; i<len; i++)
                arr[i] = arr[i+1];
            len--;
            arr_disp();
        }
        void arr_shove()
        {
            int index, ele;
            cout << "\n Enter index to shove element: ";
            cin >> index;
            cout << "\n Enter element to shove: ";
            cin >> ele;

            
        }
};


int main()
{
    array_ops arr;

    // Call init function to initialize array
    arr.arr_init();
    // Call disp function to display the array
    arr.arr_disp();
    // Call push function to add value to the end of the array
    arr.arr_push();
    // Call pop funciton to pop value from the end of the array
    arr.arr_pop();
    // Call remove function to remove element from given index
    arr.arr_remove();

    return 0;
}