#include<bits/stdc++.h>

using namespace std;

int ncr(int n, int r)
{
    if(r == 0 || n == r)
    {
        return 1;
    }

    return ncr(n-1,r-1) + ncr(n-1,r);
}




int main()
{
    int n;
    cin >> n;

    int r;
    cin >> r;

    int val = ncr(n,r);

    cout << val << endl;

}