#include<bits/stdc++.h>

using namespace std;

int fun(int n)
{
    if(n>100)
    {
        return n-10;
    }

    return fun(fun(n+11));
}



int main()
{
    int val = fun(95);

    cout << val << endl;


}