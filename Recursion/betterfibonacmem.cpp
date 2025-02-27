#include<bits/stdc++.h>

using namespace std;

int STF[100]; // limits only first 99 fibonacci numbers

int fib(int n)
{
    if(n<=1)
    {
        STF[n] = n;
        return n;
    }

    else
    {
        if(STF[n] != -1)
        {
            return STF[n];
        }

        STF[n] = fib(n-2) + fib(n-1);
        return STF[n];
    }
    
}

int main()
{
    
    for(int i=0 ; i<100 ; i++)
    {
        STF[i] = -1;
    }

    int n;
    cin >> n;

    int res = fib(n);

    cout << n << "th fibonacci number is: " << res << endl;

    for(int i=0 ; i<=n ; i++)
    {
        cout << STF[i] << " ";
    }
    
}