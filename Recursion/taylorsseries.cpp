#include<bits/stdc++.h>

using namespace std;

double ex(int x, int n)
{

    static double p = 1;
    static double f = 1;
    double r;

    if(n == 0)
    {
        return 1;
    }

    r = ex(x,n-1);
    p = p*x;
    f = f*n;

    return r + p/f;

    

}


int main()
{

    int x; cin >> x;
    int n; cin >> n;

    double val = ex(x,n);

    cout << "Value is: " << val << "\n";



}