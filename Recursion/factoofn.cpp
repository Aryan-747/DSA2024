#include<bits/stdc++.h>

using namespace std;


// returns factorial of n;

long facto(int n)
{
    if(n == 1 || n == 0)
    {
        return 1;
    }

    return n*facto(n-1);
}

int main()
{

    int n ; cin >> n;

    if(n<0)
    {
        cout << "Factorial of negative numbers don't exist!" << "\n";
        exit(0);
    }

    long faco = facto(n);

    cout << "Factorial of " << n << " is: " << faco << "\n";
}