#include<bits/stdc++.h>

using namespace std;



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

    long faco = facto(n);

    cout << "Factorial of " << n << " is: " << faco << "\n";
}