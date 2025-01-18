#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n;

    cin >> n;

    string s1[n];

    for(int i=0 ; i<n ;i++)
    {
     cin >>  s1[i];
    }

    for(int i=0 ; i<n ; i++)
    {
    if(s1[i].length()>10)
    {
        cout << s1[i].substr(0,1) << s1[i].length()-2 << s1[i].substr(s1[i].length()-1,s1[i].length());
        cout << endl;
    }

    else
    {
        cout << s1[i];
        cout << endl;
    }
    }

}