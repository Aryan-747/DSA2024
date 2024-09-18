#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int A[5] = {1,2,3,4,5};

    int *p;

    p = A;


    for(int i=0 ; i<sizeof(A)/sizeof(int); i++)
    {
        cout << "Value: " << *p << "  Address: " << p << endl;
        p++;
    }

}