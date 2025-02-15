#include<bits/stdc++.h>

using namespace std;


int powofn(int num, int n)
{

    if(n == 0)
    {
        return 1;
    }

    return num*powofn(num,n-1);

}


int main()
{
    int num;
    cin >> num;
    int n;
    cin >> n;

    int value = powofn(num,n);

    cout << num << " raised to the power " << n << " is: " << value << "\n";

}