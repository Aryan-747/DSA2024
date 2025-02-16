#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n ; cin >> n;

    cout << "First " << n << " Fibonacci Numbers are: ";

    int n0 = 0;
    int n1 = 1;
    int nn = 0;

    for(int i=0 ; i<=n ; i++)
    {
        if(i<=1)
        {
            cout << i << " ";
        }

        else
        {
            nn = n0+n1;
            n0 = n1;
            n1 = nn;

            cout << nn << " ";
        }
    }

    cout << endl;

}