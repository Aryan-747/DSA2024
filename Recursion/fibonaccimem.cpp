// Fibonacci number using memoization.
// Memoization is a technique used to speed up recursive functions by caching values of function call, Thus, avoiding repetitive calculations,

#include<bits/stdc++.h>

using namespace std;


int F[100];

int memoifib(int n)
{
    if(n<=1)
    {
        F[n] = n;
        return n;
    }

    else
    {
        if(F[n-2] == -1)
        {
            F[n-2] = memoifib(n-2);
        }

        if(F[n-1] == -1)
        {
            F[n-1] = memoifib(n-1);
        }

        return F[n-2]+F[n-1];
    }
}



int main()
{
    int n;
    cin >> n;

    for(int i=0 ; i<100 ; i++)
    {
        F[i] = -1;
    }

    int fiboc = memoifib(n);

    cout << n << "th Fibonacci Number is: " << fiboc << "\n";
}