#include<bits/stdc++.h>

using namespace std;

void fun(int n)
{
    if(n>0)
    {
        cout << n << " ";
        fun(n-1);
        fun(n-1);
    }

    return;
}

int main()
{
    int n;
    cout << "N: ";
    cin >> n;

    fun(n);

}