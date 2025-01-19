#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    int b;

    cin >> n;
    cin >> b;

    int arr[n];

    for(int i=0 ; i<n ; i++)
    {
        cin >> arr[i];
    }

    for(int i=0 ; i<n ; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << n << endl;
    cout << b << endl;
}