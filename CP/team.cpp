#include<bits/stdc++.h>

using namespace std;

struct team{

    int array[3];

};

int main()
{

    int n;

    cin >> n;

    team teams[n];

    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            cin >> teams[i].array[j];
        }
    }

    int fsum = 0;

    for(int i=0 ; i<n ; i++)
    {
        int sum = 0;
        for(int j=0 ; j<3 ;j++)
        {
            sum += teams[i].array[j];
        }

        if(sum>=2)
        {
            fsum++;
        }
    }

    cout << fsum << endl;


}