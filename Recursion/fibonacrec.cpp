#include<bits/stdc++.h>

using namespace std;

// Least optimal approach to find nth fibonacci number using recursion.


int fibofn(int n)
{
    if(n<=1)
    {
        return n;
    }

    return fibofn(n-2) + fibofn(n-1);

}


int main()
{
    int n;
    cin >> n;

    int fibon = fibofn(n);

    cout << n << "th fibonacci term is: " << fibon << "\n";

}