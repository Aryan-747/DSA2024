#include<iostream>

using namespace std;

int main()
{

    int A[6] = {1,2,3}; // All other values will get initialized with zero

    int size;

    cout << "Enter Size: ";
    cin >> size;

    int B[size] = {1,2,3}; // If the size is greater than 3 , all other values will get initialized by zero.


    for(int i=0 ; i<sizeof(A)/sizeof(int); i++)
    {
        cout << A[i] << " ";
    }

    cout << endl;

    for(int i=0 ;i<sizeof(B)/sizeof(int); i++)
    {
        cout << B[i] << " ";
    }

    cout << endl;

    // this concludes that we can now intialize variable sized arrays , which was not possible earlier in C++ , as all remaining values would be garbage values.

    return 0;
}