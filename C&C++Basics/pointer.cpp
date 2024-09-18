#include<iostream>

using namespace std;

int main()
{
    int ar = 69;
    int *pointa;
    pointa = &ar;

    cout << "Address of ar is: " << pointa << endl;
    cout << "Value of ar is: " << *pointa << endl; //Deferencing a pointer



}