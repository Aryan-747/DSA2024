#include<bits/stdc++.h>

using namespace std;

void v2(int n);

void v1(int n)
{

    if(n>0)
    {
        cout << n << "\n";
        v2(n-1);
    }
}

void v2(int n)
{

    if(n>1)
    {
        cout << n << "\n";
        v1(n/2);
    }

}

int main()
{

    int n;

    cin >> n;

    v1(n);

}