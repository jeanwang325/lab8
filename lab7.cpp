#include "eecs230.h"
#include <vector>

//function declarations
void pointer_fun(int, int);
void pointer_arithmetic_chars();
short greater_val(short *, short *);

void pointer_arithmetic_ints();
void pointer_data(int);


int main()
{
    cout << "main()" << endl;


    //pointer_data(3);
    //pointer_arithmetic_ints();


    pointer_fun(6,3);
    //greater_val(...)
    //pointer_arithmetic_chars();

}

/* Creates two integer pointers named ptrA and ptrB that point to ints a and b, respectively.
 * Prints to terminal the values of the ints at the pointers. Then, prints to terminal the value of the ints at the pointer locations.*/
void pointer_fun(int a, int b)
{
    int* heapptr_a = new int(a);
    int* heapptr_b = new int(b);
    int** heapptr_c = new int*(heapptr_a);

    cout << "memory addresses (first three are the same, since they point to a):\n";
    cout << heapptr_a << ' ' << &(*(heapptr_a)) << ' ' << &(*(*(&heapptr_a))) << ' ' << heapptr_b << ' ' << heapptr_c << "\n";

    cout << "dereferenced once:\n";
    cout << *(heapptr_a) << ' ' << *(heapptr_b) << ' ' << *(heapptr_c) << "\n";

    cout << "dereferenced twice:\n";
    cout << "NOT_ALLOWED" << ' ' << "NOT_ALLOWED" << ' ' << **(heapptr_c) << "\n";

    //follow-up question; how far away, in bytes, is location of ptrA versus location of ptrB? How many bytes is an int stored in?
    //cout << "\n Int size (bytes): "<< sizeof(a) << endl;

}

void pointer_arithmetic_chars()
{
    char course[] = "Programming for Engineers";
    char *pc = course;

    int length = sizeof(course)/sizeof(char);

    for(int i=0; i<length; i++)
    {
        //your code here:

            //print to terminal each letter in char[] by dereferencing pc

            //increment pointer


    }
}

short greater_val(short* ptrA, short* ptrB)
{
    if (*(ptrA) < *(ptrB))
        return *(ptrB);
    else
        return *(ptrA);
}

/* prints out pointer location in hex, decimal, and binary */
void pointer_data(int a)
{
    int * ptrA = &a;
    cout << "ptrA value of int: " << *ptrA << endl;
    cout << "ptrA virtual memory location: "<< endl;
    cout << "    (hexadecimal): " << ptrA << endl;
    cout << "    (decimal)    : " << (long) ptrA << endl;
    cout << "    (binary)     : " <<  bitset<64>((long) ptrA) << '\n' << endl;

    //Do the same for int b -- your code here
}

/* prints out ints and pointer addresses */
void pointer_arithmetic_ints()
{
    int array_of_ints[3] = {10, 100, 200};
    int *ptr;

    // let us have array address in pointer.
    ptr = array_of_ints;
    int num_elements = sizeof(array_of_ints) / sizeof(int);

    for (int i = 0; i < num_elements; i++) {
        cout << "Address of var[" << i << "] = ";
        cout << ptr << endl;

        cout << "Value of var[" << i << "] = ";
        cout << *ptr << endl;

        // point to the next location
        ptr++;
    }
}

