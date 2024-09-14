#include<iostream>

using namespace std;

struct Rectangle
{
    double length;
    double breadth;

};

int main()
{
    struct Rectangle r1;

    cout<<sizeof(r1) << endl; // 8 + 8 i.e 16 bytes

    r1.length = 15.69;
    r1.breadth = 20.55;

    cout << "Area of Rectangle: " << r1.length*r1.breadth << endl;


    return 0;
}