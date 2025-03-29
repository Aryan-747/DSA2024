#include<bits/stdc++.h>

using namespace std;

int main()
{

    vector<int> arr = {1,2,3,0,-1,-2,5,4,3,0,2,3,4,-1,-1,2};

    int pre = 0;
    int suf = 0;

    int maxp = INT_MIN;

    int pprod = 1;
    int sprod = 1;

    int n = arr.size();

    for(int i=0 ; i<arr.size() ; i++)
    {
        if(pprod == 0)
        {
            pprod = 1;
        }

        if(sprod == 0)
        {
            sprod = 1;
        }

        pprod *= arr[i];
        sprod *= arr[n-i-1];

        maxp = max(maxp,max(sprod,pprod));
    }

    cout << maxp << endl;

}