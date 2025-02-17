#include<bits/stdc++.h>

using namespace std;

int F[100];

int main()
{

    int n;
    cin >> n;

    cout << "First n fibonacci numbers are: "  << endl;

    F[0] = 0;
    F[1] = 1;

    int prev1 = 1;
    int prev2 = 0;

    for(int i=2 ; i<=n ; i++)
    {
       F[i] = prev2+prev1;
       prev2 = prev1;
       prev1 = F[i];
    }

    for(int i=0 ; i<=n ; i++)
    {
        cout << F[i] << " ";
    }
    cout << '\n';

    cout << n << "th Fibonacci number is: " << F[n] << "\n";


}