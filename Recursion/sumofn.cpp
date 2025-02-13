#include<bits/stdc++.h>

using namespace std;

int sumofn(int n)
{
    if(n == 0)
    {
        return 0;
    }

    return sumofn(n-1) +n;

}

int main()
{

    int n; cin >> n;

    int v = sumofn(n);

    cout << v << "\n";

}