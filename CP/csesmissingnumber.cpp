#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{

    int n;

    cin >> n;

    vector<int> array;

    for(int i=0 ; i<n ; i++)
    {
        int no;
        cin >> no;

        array.push_back(no);
    }

    int ret = 0;

    sort(array.begin(),array.end());

    for(int i=0 ; i<array.size() ; i++)
    {
        cout << array[i] << " ";
    }

    cout << endl;

    for(int i=0  ; i<array.size() ; i++)
    {
        if(i+1 != array[i])
        {
            ret = i+1;
            break;
        }    
    }

    cout << ret << endl;
}