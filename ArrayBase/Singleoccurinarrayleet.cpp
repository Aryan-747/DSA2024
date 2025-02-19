#include<bits/stdc++.h>

using namespace std;


class Solution {
    public:
        int singleNonDuplicate(vector<int>& nums) {
    
            if(nums.size() == 1)
            {
                return nums[0];
            }
    
            if(nums[0]!=nums[1])
            {
                return nums[0];
            }
    
            if(nums[nums.size()-1]!= nums[nums.size()-2])
            {
                return nums[nums.size()-1];
            }
    
    
            int low=1;
            int high = nums.size()-2;
    
            while(low<=high)
            {
                int mid = (low+high)/2;
    
                if(nums[mid] != nums[mid+1] && nums[mid]!=nums[mid-1])
                {
                    return nums[mid];
                }

                // We are in left side of the single element so we eliminate left portion
    
                else if((mid%2 == 0 && nums[mid+1]== nums[mid]) || (mid%2!=0 && nums[mid-1] == nums[mid]))
                {
                    low = mid+1;
                }
    
                else
                {
                    high = mid-1;
                }
            }
    
            return -1;
    
    
            
        }
    };