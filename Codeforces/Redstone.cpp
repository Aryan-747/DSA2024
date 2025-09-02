#include<bits/stdc++.h>

using namespace std;

int main()
{

    int T; // no of testcases
    cin >> T;

    while(T>0)
    {

        int n; // no of gears
        cin >> n;

        float arr[n] = {0}; // no of teeth each gear has

        for(int i=0 ; i<n ; i++)
        {
            float val;
            cin >> val;
            arr[i] = val;
        }


        bool is_satisfact = false;

        sort(arr,arr+n);


        for(int i=1 ; i<n ; i++)
        {
            if(arr[i] == arr[i-1])
            {
                is_satisfact = true;
                break;
            }
        }

        if(is_satisfact){
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }

        T--;
    }



}