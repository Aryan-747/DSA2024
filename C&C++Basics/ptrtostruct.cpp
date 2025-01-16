#include<bits/stdc++.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};


int main()
{
    Rectangle r = {4,12};

    cout << "Length: " << r.length << endl;
    cout << "Breadth: " << r.breadth << endl;


    Rectangle *ptr;
    ptr = &r; // Pointer to a structure

    cout << "Length: " << ptr->length << endl;
    cout << "Breadth: " << ptr->breadth << endl; 


}


