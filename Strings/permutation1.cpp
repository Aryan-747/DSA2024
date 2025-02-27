#include<bits/stdc++.h>

using namespace std;

void permut(vector<vector<int>> &ans, int freq[],vector<int> &ds, vector<int> &nums)
{

    if(ds.size() == nums.size())
    {
        ans.push_back(ds);
        return;
    }

    for(int i=0 ; i<nums.size(); i++)
    {
        if(freq[i]==0)
        {
            ds.push_back(nums[i]);
            freq[i] = 1;
            permut(ans,freq,ds,nums);
            freq[i]=0;
            ds.pop_back();
        }
    }
  
}


int main()
{

    vector<vector<int>> ans;

    vector<int> nums = {1,2,3};

    vector<int> ds;
    
    int freq[nums.size()] = {0};

    permut(ans,freq,ds,nums);

    for(int i=0 ; i<ans.size() ; i++)
    {
        for(int j=0 ; j<ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    
}