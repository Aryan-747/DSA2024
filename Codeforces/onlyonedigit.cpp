#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin >> n;

    while(n>0)
    {
        int number;
        cin >> number;

        int mindig = INT_MAX;

        while(number>0)
        {
            int dig = number%10;
            mindig = min(dig,mindig);
            number = number/10;
        }

        cout << mindig << '\n';

        n--;
    }




}