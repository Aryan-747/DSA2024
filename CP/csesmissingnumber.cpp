#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{

    int n;

    cin >> n;

    vector<int> array;

    for(int i=0 ; i<n-1 ; i++)
    {
        int no;
        cin >> no;

        array.push_back(no);
    }

    int ret = 0;

    sort(array.begin(),array.end());

    if(array.size()!=n)
    {
        for(int i=0 ; i<n ; i++)
        {
            if(array[i]!= i+1)
            {
                array.push_back(i+2);
                ret = i+1;
                break;
            }
        }

        cout << ret << endl;
    }
}