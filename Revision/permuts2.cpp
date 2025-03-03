#include<bits/stdc++.h>

using namespace std;

// permutations using swapping


void permut(vector<vector<int>> &ans, vector<int> &find, int index)
{

    if(index>=find.size())
    {
        ans.push_back(find);
        return;
    }

    for(int i=index ; i<find.size() ; i++)
    {
        swap(find[index],find[i]);
        permut(ans,find,index+1);
        swap(find[index],find[i]);
    }

}



int main()
{

    int index = 0;

    vector<vector<int>> ans;
    vector<int> find = {1,2,3};


    permut(ans,find,index);


    for(int i=0 ; i<ans.size(); i++)
    {
        for(int j=0 ; j<ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }

        cout << endl;
    }


}