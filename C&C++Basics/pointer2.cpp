#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{

    // The new keyword in C++ can be used to occupy memory in the Heap.

    int *p; // declaring a pointer
    p = new int[5]; // allocates space of 5 integers in the Heap.

    cout << "Address: " << p << endl;
    cout << "Address: " << ++p << endl; 


}