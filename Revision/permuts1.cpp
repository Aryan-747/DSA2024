#include<bits/stdc++.h>

using namespace std;


void permut(vector<vector<int>> &ans, int freq[], vector<int> &bnull, vector<int> &combis)
{
    if(bnull.size()==combis.size())
    {
        ans.push_back(bnull);
        return;
    }
    
    for(int i=0 ; i<combis.size(); i++)
    {
        if(freq[i] == 0)
        {
            bnull.push_back(combis[i]);
            freq[i] = 1;
            permut(ans,freq,bnull,combis);
            bnull.pop_back();
            freq[i] = 0;
        }
    }
}


int main()
{

    vector<int> combis = {1,2,3,};
    vector<vector<int>> ans;

    int freq[combis.size()] = {0};
    vector<int> bnull;

    permut(ans,freq,bnull,combis);

    for(int i=0 ; i<ans.size(); i++)
    {
        for(int j=0 ; j<ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }

        cout << '\n';
    }

}