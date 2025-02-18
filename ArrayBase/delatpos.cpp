#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n;

    cin >> n;

    int a[n];

    for(int i=0 ; i<n ; i++)
    {
        cin >> a[i];
    }

    cout << "Elements before deletion: ";
    for(int i=0 ; i<n ; i++)
    {
        cout << a[i] << " ";
    }

    cout << "\n" << "Size of array: " << sizeof(a)/sizeof(int)<< "\n";

    int ind;
    cin >> ind;

    for(int i=ind ; i<n-1; i++)
    {
        a[i] = a[i+1];
    }
    n--;


    cout << "Elements after deletion: ";
    for(int i=0 ; i<n ; i++)
    {
        cout << a[i] << " ";
    }

    cout << "\n" << "Size of array: " << sizeof(a)/sizeof(int)<< "\n";





}