#include<iostream>

using namespace std;

int main()
{

    cout << "Enter size of array: ";
    int size;
    cin >> size;

    int A1[size] = { };

    cout << "Enter array elements: ";

    for(int i=0 ; i<size; i++)
    {
        cin >> A1[i];
    }

    cout << "The array elements are: ";

    for(int i=0 ; i<size ; i++)
    {
        cout << A1[i] << " ";
    }

    int sum=0;

    for(int i=0 ; i<size ; i++)
    {
        sum +=A1[i];
    }

    cout << endl;
    cout << "Sum of the array elements is: " << sum << endl;

}