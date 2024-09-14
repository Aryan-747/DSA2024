#include<iostream>

using namespace std;

int main()
{

    int array[10];

    array[0] = 59;
    array[1] = 69;
    array[2] = 77;
    array[3]  = 77;        
    array[4]  = 77;
    array[5]  = 77;    
    array[6]  = 77;
    array[7]  = 77;
    array[8]  = 77;
    array[9]  = 77;

    cout << sizeof(array) << endl;
    cout << array[0] << endl;
    cout << array[1] << endl;

    for(int i=0 ; i<(sizeof(array)/sizeof(int)); i++)
    {
        cout << array[i] << " ";
    }


    return 0;
}