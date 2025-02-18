#include<iostream>

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

    cout << "Array Elements before insertion: ";
    for(int i=0 ; i<n ; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";

    int ind,val;
    cin >> ind >> val;

    for(int i=n ; i>=ind-1 ; i--)
    {
        a[i] = a[i-1];
    }
    n++;
    a[ind-1] = val;

    cout << "Array Elements after insertion: ";

    for(int i=0 ; i<n ; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";

    
}