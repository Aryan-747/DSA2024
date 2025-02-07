#include <bits/stdc++.h>

using namespace std;

int func (int n)
{

    if(n>0)
    {
        return func(n-1) + n;
    }

   return 0;

}

int func2 (int n)
{
    static int  x = 0;

    if(n>0)
    {
        x++;
        return func2(n-1) + x;
    }

    return 0;

}

int main()
{
    int n;

    cin >> n;

    int val = func(n);
    int val2 = func2(n);

    cout << "Value is: " << val << endl;
    cout << "Value is: " << val2 << endl;

    return 0;
}