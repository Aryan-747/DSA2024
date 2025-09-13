#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while(T>0)
    {

        int x;
        int n;
        cin >> x;
        cin >> n;

        vector<int> arr;

        arr.push_back(x);

        int sum = x;

        for(int i=1 ; i<n ; i++)
        {
            arr.push_back(arr[i-1]*-1);
            sum+=arr[i-1]*-1;
        }

        cout << sum << '\n';
        T--;
    }
}