#include<bits/stdc++.h>

using namespace std;

class Solution {
public:

    // average TC = O(logn)
    // worst TC = O(n/2) Since we end up eliminating half the array because of duplicates.

    bool search(vector<int>& nums, int target) {

        int low = 0;
        int high = nums.size()-1;

        while(low<=high)
        {
            int mid = (low+high)/2;

            if(nums[mid] == target)
            {
                return true;
            }

            else if(nums[low] == nums[mid] && nums[mid] == nums[high])
            {
                low = low +1;
                high = high -1;
                continue; 
            }

            else if(nums[low]<=nums[mid])
            {
                if(target>=nums[low] && target<=nums[mid])
                {
                    high = mid -1;
                }

                else
                {
                    low = mid +1;
                }
            }

            else
            {
                if(target>=nums[mid] && target<=nums[high])
                {
                    low = mid +1;
                }

                else
                {
                    high = mid -1;
                }
            }
        }

        return false;
        
    }
};