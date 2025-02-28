#include<bits/stdc++.h>

using namespace std;

// more optimized method using negligble auxillary space , thus lesser space complexity!


void permuswap(int index, vector<vector<int>> &ans,vector<int>& nums)
{

    if(index == nums.size())
    {
        ans.push_back(nums);
        return;
    }

    for(int i=index ; i<nums.size() ; i++)
    {
        swap(nums[index],nums[i]);
        permuswap(index+1,ans,nums);
        swap(nums[index],nums[i]);
    }

}




int main()
{

    vector<vector<int>> ans;
    vector<int> nums ={1,2,3};
    int index = 0;

    permuswap(index,ans,nums);

    cout << "Permutations are: \n";

    for(int i=0 ; i<ans.size(); i++)
    {
        for(int j=0 ; j<ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }

}