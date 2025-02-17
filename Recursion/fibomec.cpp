#include<bits/stdc++.h>

using namespace std;


int STF[100];


int fiboc(int n)
{
    if(n<=1)
    {
        STF[n] = n;
        return n;
    }

    else
    {
        if(STF[n-1] == -1)
        {
            STF[n-1] = fiboc(n-1);
        }

        if(STF[n-2] == -1)
        {
            STF[n-2] = fiboc(n-2);
        }

        return STF[n-2] + STF[n-1];
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

    int res = fiboc(n);

    cout << n << "th Fibonacci Number is: " << res << endl;




}