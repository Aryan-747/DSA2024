#include<bits/stdc++.h>

using namespace std;


vector<int> sieve(int n)
{
    vector <int> ans;

    vector<int> prime(100,0);

    for(int i=2; i<=n ; i++)
    {
        if(prime[i] == 0)
        {
            for(int j = i*i ; j<=n ; j+=i)
            {
                prime[j] = 1;
            }
        }
    }

    for(int i=2 ; i<=n ; i++)
    {
        if(prime[i]==0)
        {
            ans.push_back(i);
        }
    }

    return ans;

}


int main()
{

    int n;

    cin >>n;


    vector<int> ans = sieve(n);

    for(int i=0 ; i<ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    cout << '\n';

}