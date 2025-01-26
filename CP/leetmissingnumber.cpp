#include<bits/stdc++.h>

using namespace std;

// Using Sorting Approach
class Solution {
public:
    int missingNumber(vector<int>& nums) {

       sort(nums.begin(),nums.end());

       int sizer = nums.size();

       int fnum = 0;

       if(nums[0]!=0)
       {
        fnum = 0;
       }

       else if(nums[sizer-1]!= sizer)
       {
        fnum = sizer;
       }

       else
       {
        for(int i=1 ; i<nums.size() ; i++)
        {
            if(i!= nums[i])
            {
                fnum = i;
                break;
            }
        }
       }

       return fnum;
    }

};