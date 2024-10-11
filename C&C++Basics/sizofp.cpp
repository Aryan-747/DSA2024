#include<iostream>

using namespace std;

struct data
{
    int rollno;
    int age;
};

int main()
{

    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct data *p5;

    cout << sizeof(p1) << endl;
    cout << sizeof(p2) << endl;
    cout << sizeof(p3) << endl;
    cout << sizeof(p4) << endl;
    cout << sizeof(p5) << endl;


    // Size of all pointers comes out to be 8. This shows that every pointer occupies 8 bytes of memory irrespective of the datatype.

    return 0;

}