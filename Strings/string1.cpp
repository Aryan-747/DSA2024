#include<bits/stdc++.h>

using namespace std;

int main()
{

    string s = "I LOVE PASTA LINGUINE";

    // to lowercase

    for(int i=0 ; i<s.length(); i ++)
    {
        if(s[i]>=62 && s[i]<=90)
        {
            s[i] = s[i]+32;
        }
    }

    cout << s << endl;

}