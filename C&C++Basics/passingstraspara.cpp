#include<bits/stdc++.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};


void fun(Rectangle *r)
{
    // updates values

    r->length = r->length+5;
    r->breadth = r->breadth+5;

}

Rectangle *create()
{
    Rectangle *creator = new Rectangle;

    creator->length = 69;
    creator->breadth = 69;

    return creator;
}


int main()
{
    Rectangle r1;

    r1.length = 15;
    r1.breadth = 25;

    cout << "Value before updation: " << endl;
    cout << "Length: " << r1.length << " Breadth: " << r1.breadth << endl;


    // Calling function using call by reference

    fun(&r1);
    
    cout << "Value After updation: " << endl;
    cout << "Length: " << r1.length << " Breadth: " << r1.breadth << endl;


    // Creating new instance of Rectangle using function

    Rectangle *r2 = create();

    cout << "Values of r2: " << endl;
    cout << "Length: " << r2->length << " Breadth: " << r2->breadth << endl;


}