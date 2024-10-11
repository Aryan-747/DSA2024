#include<iostream>

using namespace std;

int main()
{

    int ary = 6969;

    int &anu = ary; // Initializing Reference variable anu


    cout << "Value of anu is: " << anu << endl;
    ary++;
    cout << "Value of ary is: " << ary << endl;
    cout << "Value of anu is: " << anu << endl;

    // Referencing is used to give multiple names to a data variable. This usually helps in perimeter passing for functions.




    return 0;






}