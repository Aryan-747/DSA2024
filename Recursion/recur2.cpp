#include<bits/stdc++.h>

using namespace std;

long facto(int n)
{
    if(n == 0)
    {
        return 1;
    }

    return n*facto(n-1);
}

int main()
{
    int n;
    cout << "Enter number you want to find the factorial of: ";
    cin >> n;

    long result = facto(n);

    cout << "Facorial of " << n << " is: " << result << endl;
}