#include<bits/stdc++.h>

using namespace std;


void permut(int index ,vector<int> &nums,vector<vector<int>> &ans)
{

    if(index == nums.size())
    {
        ans.push_back(nums);
        return;
    }

    for(int i=index ; i<nums.size();i++)
    {
        swap(nums[index],nums[i]);
        permut(index+1,nums,ans);
        swap(nums[index],nums[i]);
    }

}

int main()
{

    vector<vector<int>> ans;
    vector<int> nums = {1,2,3};

    permut(0,nums,ans);

    for(int i=0 ; i<ans.size() ; i++)
    {
        for(int j=0 ; j<ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << '\n';
    }

}