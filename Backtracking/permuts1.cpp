#include<bits/stdc++.h>

using namespace std;


void permuts(vector<vector<int>> &answer, vector<int> &ds, vector<int> &find, int freq[])
{

    if(ds.size() == find.size())
    {
        answer.push_back(ds);
        return;
    }

    for(int i=0 ; i<find.size(); i++)
    {
        if(freq[i] == 0)
        {
            ds.push_back(find[i]);
            freq[i] = 1;
            permuts(answer,ds,find,freq);
            freq[i] = 0;
            ds.pop_back();
        }
    }



}




int main()
{
    vector<vector<int>> answer;
    vector<int> ds;
    vector<int> find = {1,2,3};

    int freq[find.size()] = {0};


    permuts(answer,ds,find,freq);

    for(int i=0 ; i<answer.size(); i++)
    {
        for(int j=0 ; j<answer[i].size(); j++)
        {
            cout << answer[i][j] << " ";
        }

        cout << '\n'; 
    }

}