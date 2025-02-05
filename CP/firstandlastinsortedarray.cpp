#include<bits/stdc++.h>

using namespace std;


class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        vector <int> positions;

        int start = -1;
        int end = -1;
        for(int i=0 ; i<nums.size() ; i++)
        {
            if(nums[i] == target)
            {
                start = i;

                for(int j=i; j<nums.size() ; j++)
                {
                    if(nums[j] == target)
                    {
                        end = j;
                    }
                }

                break;
            }
        }

        if(start != -1 && end != -1)
        {
           positions.push_back(start);
           positions.push_back(end);

            return positions;
        }

        else
        {
            positions.push_back(-1);
            positions.push_back(-1);
            return positions;
        }
        
    }
};